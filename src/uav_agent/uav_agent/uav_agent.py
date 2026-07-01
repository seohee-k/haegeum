import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Pose
from haegeum_interfaces.msg import RobotStatus
from haegeum_interfaces.msg import Assignment


class UAVAgent(Node):

    def __init__(self):

        super().__init__("uav_01")

        self.robot_id = "uav_01"

        self.state = "PATROL"
        self.current_task = "NONE"

        self.publisher = self.create_publisher(
            RobotStatus,
            "/robot_status",
            10
        )

        self.subscription = self.create_subscription(
            Assignment,
            "/assignment",
            self.assignment_callback,
            10
        )

        self.timer = self.create_timer(
            1.0,
            self.publish_status
        )

        self.get_logger().info("UAV Agent Started")

    def publish_status(self):

        msg = RobotStatus()

        msg.robot_id = self.robot_id
        msg.robot_type = "UAV"

        msg.pose = Pose()

        msg.pose.position.x = 0.0
        msg.pose.position.y = 0.0
        msg.pose.position.z = 20.0

        msg.battery = 100.0

        msg.busy = self.state != "PATROL"

        msg.state = self.state

        msg.current_task = self.current_task

        self.publisher.publish(msg)

    def assignment_callback(self, msg):

        if msg.assigned_robot != self.robot_id:
            return

        self.state = "INTERCEPT"

        self.current_task = msg.target_id

        self.get_logger().info(
            f"Mission Assigned -> {msg.target_id}"
        )


def main():

    rclpy.init()

    node = UAVAgent()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()