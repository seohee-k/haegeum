import rclpy

from rclpy.node import Node

from ai_commander.battle_manager import (
    BattleManager,
    RobotInfo,
    TargetInfo
)

from ai_commander.allocator import Allocator

from haegeum_interfaces.msg import (
    RobotStatus,
    TargetDetected,
    Assignment
)


class AICommander(Node):

    def __init__(self):

        super().__init__("ai_commander")

        self.get_logger().info("AI Commander Started")

        # -----------------------------
        # Battle Manager
        # -----------------------------

        self.battle_manager = BattleManager()

        # -----------------------------
        # Allocator
        # -----------------------------

        self.allocator = Allocator(self.battle_manager)

        # -----------------------------
        # Publisher
        # -----------------------------

        self.assignment_pub = self.create_publisher(
            Assignment,
            "/assignment",
            10
        )

        # -----------------------------
        # Subscribers
        # -----------------------------

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

    ####################################################
    # Robot Status
    ####################################################

    def robot_callback(self, msg):

        robot = RobotInfo(

            robot_id=msg.robot_id,

            robot_type=msg.robot_type,

            pose=msg.pose,

            battery=msg.battery,

            state=msg.state

        )

        self.battle_manager.update_robot(robot)

        self.get_logger().info(

            f"[Robot] "

            f"{robot.robot_id} "

            f"({robot.pose.position.x:.1f}, "

            f"{robot.pose.position.y:.1f}, "

            f"{robot.pose.position.z:.1f}) "

            f"{robot.state}"

        )

    ####################################################
    # Target Detected
    ####################################################

    def target_callback(self, msg):

        target = TargetInfo(

            target_id=msg.target_id,

            target_type=msg.target_type,

            position=msg.position,

            confidence=msg.confidence

        )

        self.battle_manager.update_target(target)

        self.get_logger().info(

            f"[Target] "
            f"{target.target_id} "
            f"Confidence={target.confidence:.2f}"

        )

        assignment = self.allocator.allocate(target)

        if assignment is not None:

            self.assignment_pub.publish(assignment)

            self.get_logger().info(

                f"[Mission] "
                f"{assignment.assigned_robot}"
                f" -> "
                f"{assignment.target_id}"

            )

        self.battle_manager.print_summary()


def main(args=None):

    rclpy.init(args=args)

    node = AICommander()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()