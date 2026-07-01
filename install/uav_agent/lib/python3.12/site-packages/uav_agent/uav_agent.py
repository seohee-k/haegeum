import rclpy

from rclpy.node import Node

from geometry_msgs.msg import Pose

from haegeum_interfaces.msg import RobotStatus


class UAVAgent(Node):

    def __init__(self):

        super().__init__("uav_01")

        self.publisher = self.create_publisher(
            RobotStatus,
            "/robot_status",
            10
        )

        self.timer = self.create_timer(
            1.0,
            self.publish_status
        )

        self.get_logger().info("UAV Agent Started")

    def publish_status(self):

        msg = RobotStatus()

        msg.robot_id = "uav_01"

        msg.robot_type = "UAV"

        msg.pose = Pose()

        msg.pose.position.x = 0.0
        msg.pose.position.y = 0.0
        msg.pose.position.z = 10.0

        msg.battery = 100.0

        msg.busy = False

        msg.state = "PATROL"

        msg.current_task = "NONE"

        self.publisher.publish(msg)

        self.get_logger().info("RobotStatus Published")


def main():

    rclpy.init()

    node = UAVAgent()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()