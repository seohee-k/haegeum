import math
import rclpy
import random

from rclpy.node import Node

from geometry_msgs.msg import Pose
from haegeum_interfaces.msg import RobotStatus
from haegeum_interfaces.msg import Assignment
from haegeum_interfaces.msg import Event
from std_msgs.msg import Float32MultiArray

class UAVAgent(Node):

    def __init__(self):

        super().__init__("uav_01")

        self.robot_id = "uav_01"

        self.state = "PATROL"
        self.current_task = "NONE"

        self.pose = Pose()
        self.target_pose = Pose()

        self.publisher = self.create_publisher(
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

        self.sensor_timer = self.create_timer(
            0.1,
            self.publish_sensor_data
        )

        self.get_logger().info("UAV Agent Started")

        self.move_timer = self.create_timer(
            0.5,
            self.move_robot
        )

    def publish_status(self):

        msg = RobotStatus()

        msg.robot_id = self.robot_id
        msg.robot_type = "UAV"

        # msg.pose.position.x = 0.0
        # msg.pose.position.y = 0.0
        msg.pose.position.z = 20.0
        
        msg.pose = self.pose

        msg.battery = 100.0

        msg.busy = self.state != "PATROL"

        msg.state = self.state

        msg.current_task = self.current_task

        self.publisher.publish(msg)

    def assignment_callback(self, msg):

        if msg.assigned_robot != self.robot_id:
            return
        

        self.target_pose.position = msg.target_position

        self.state = msg.mission_type


        self.state = "INTERCEPT"

        self.current_task = msg.target_id

        self.get_logger().info(
            f"Mission Assigned -> {msg.target_id}"
        )
    
    def move_robot(self):
        if self.state != "INTERCEPT":
            return

        dx = self.target_pose.position.x - self.pose.position.x
        dy = self.target_pose.position.y - self.pose.position.y
        dz = self.target_pose.position.z - self.pose.position.z

        distance = math.sqrt(dx*dx + dy*dy + dz*dz)

        if distance < 1.0:

            self.pose.position = self.target_pose.position

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

        step = 2.0

        self.pose.position.x += step * dx / distance
        self.pose.position.y += step * dy / distance
        self.pose.position.z += step * dz / distance

    def publish_sensor_data(self):

        msg = Float32MultiArray()

        msg.data = [

            self.pose.position.x,
            self.pose.position.y,

            0.1,
            0.2,

            0.0,
            0.0,

            self.pose.position.z,

            0.01

        ]

        self.sensor_pub.publish(msg)


def main():

    rclpy.init()

    node = UAVAgent()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()