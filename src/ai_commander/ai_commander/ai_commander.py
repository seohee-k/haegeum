import rclpy

from rclpy.node import Node

from haegeum_interfaces.msg import (
    RobotStatus,
    TargetDetected,
    Assignment,
)

from robot_manager import RobotManager
from allocator import Allocator


class AICommander(Node):

    def __init__(self):

        super().__init__("ai_commander")

        self.manager = RobotManager()
        self.allocator = Allocator()

        self.create_subscription(
            RobotStatus,
            "/robot_status",
            self.robot_callback,
            10
        )

        self.create_subscription(
            TargetDetected,
            "/target_detected",
            self.target_callback,
            10
        )

        self.publisher = self.create_publisher(
            Assignment,
            "/assignment",
            10
        )

        self.get_logger().info("AI Commander Started")

    def robot_callback(self, msg):

        self.manager.update(msg)

    def target_callback(self, target):

        robots = self.manager.get_available_uavs()

        if len(robots) == 0:

            self.get_logger().warn("No available UAV")

            return

        selected = self.allocator.allocate(
            robots,
            target
        )

        assignment = Assignment()

        assignment.target_id = target.target_id

        assignment.assigned_robot = selected.robot_id

        assignment.mission_type = "INTERCEPT"

        assignment.target_position = target.position

        self.publisher.publish(assignment)

        self.get_logger().info(
            f"{selected.robot_id} selected"
        )


def main():

    rclpy.init()

    node = AICommander()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()