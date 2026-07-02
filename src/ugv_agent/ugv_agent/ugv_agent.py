import math
import rclpy

from rclpy.node import Node

from geometry_msgs.msg import Pose

from haegeum_interfaces.msg import (
    RobotStatus,
    Assignment
)
from haegeum_interfaces.msg import Event
from std_msgs.msg import Float32MultiArray


class UGVAgent(Node):

    def __init__(self):

        super().__init__("ugv_01")

        self.robot_id = "ugv_01"

        self.state = "PATROL"

        self.pose = Pose()

        self.pose.position.x = 0.0
        self.pose.position.y = 0.0
        self.pose.position.z = 0.0

        self.target_pose = Pose()
        self.state = "PATROL"
        self.current_task = "NONE"

        self.battery = 100.0



        self.status_pub = self.create_publisher(
            RobotStatus,
            "/robot_status",
            10
        )
        
        self.event_pub = self.create_publisher(
            Event,
            "/event",
            10
        )

        self.sensor_pub = self.create_publisher(
            Float32MultiArray,
            f"/sensor_data/{self.robot_id}",
            10
        )

        self.assignment_sub = self.create_subscription(
            Assignment,
            "/assignment",
            self.assignment_callback,
            10
        )

        self.timer = self.create_timer(
            1.0,
            self.publish_status
        )

        self.move_timer = self.create_timer(
            0.5,
            self.move_robot
        )

        self.create_timer(
            1.0,
            self.publish_status
        )

        self.sensor_timer = self.create_timer(
            0.1,
            self.publish_sensor_data
        )

        self.get_logger().info("UGV Agent Started")


    def assignment_callback(self, msg):

        if msg.assigned_robot != self.robot_id:
            return

        self.target_pose.position = msg.target_position

        self.state = msg.mission_type

        self.current_task = msg.target_id

        self.get_logger().info(
            f"Mission Assigned -> {msg.target_id}"
        )

    # def move(self):

    #     if self.state != "INTERCEPT":
    #         return

    #     step = 0.3

    #     dx = self.target_pose.position.x - self.pose.position.x
    #     dy = self.target_pose.position.y - self.pose.position.y

    #     if abs(dx) > step:
    #         self.pose.position.x += step if dx > 0 else -step
    #     else:
    #         self.pose.position.x = self.target_pose.position.x

    #     if abs(dy) > step:
    #         self.pose.position.y += step if dy > 0 else -step
    #     else:
    #         self.pose.position.y = self.target_pose.position.y

    #     self.battery -= 0.02

    #     if (
    #         self.pose.position.x == self.target_pose.position.x
    #         and
    #         self.pose.position.y == self.target_pose.position.y
    #     ):

    #         event = Event()

    #         event.stamp = self.get_clock().now().to_msg()

    #         event.source = self.robot_id

    #         event.level = "INFO"

    #         event.message = f"MISSION_COMPLETE:{self.current_task}"

    #         self.event_pub.publish(event)

    #         self.state = "PATROL"

    #         self.current_task = "NONE"

    #         self.get_logger().info("Mission Complete")


    def publish_status(self):

        msg = RobotStatus()

        msg.robot_id = self.robot_id

        msg.robot_type = "UGV"

        msg.pose = self.pose

        msg.battery = 100.0

        msg.busy = self.state != "PATROL"

        msg.state = self.state

        msg.current_task = self.current_task

        self.status_pub.publish(msg)

    def move_robot(self):

        if self.state != "INTERCEPT":
            return

        dx = self.target_pose.position.x - self.pose.position.x
        dy = self.target_pose.position.y - self.pose.position.y

        distance = math.sqrt(dx * dx + dy * dy)

        if distance < 1.0:

            self.pose.position.x = self.target_pose.position.x
            self.pose.position.y = self.target_pose.position.y

            event = Event()

            event.stamp = self.get_clock().now().to_msg()
            event.source = self.robot_id
            event.level = "INFO"
            event.message = f"MISSION_COMPLETE:{self.current_task}"

            self.event_pub.publish(event)

            self.state = "PATROL"
            self.current_task = "NONE"

            self.get_logger().info("Mission Complete")

            return

        step = 1.0

        self.pose.position.x += step * dx / distance
        self.pose.position.y += step * dy / distance

        # UGV는 항상 지상
        self.pose.position.z = 0.0

    def publish_sensor_data(self):

        msg = Float32MultiArray()

        msg.data = [

            self.pose.position.x,
            self.pose.position.y,

            0.1,
            0.2,

            0.0,
            0.0,

            1.0,
            1.0,

            0.5,
            0.0

        ]

        self.sensor_pub.publish(msg)


def main(args=None):

    rclpy.init(args=args)

    node = UGVAgent()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()