import random

import rclpy

from rclpy.node import Node

from geometry_msgs.msg import Pose

from haegeum_interfaces.msg import TargetDetected


class TargetGenerator(Node):

    def __init__(self):

        super().__init__("target_generator")

        self.pub = self.create_publisher(
            TargetDetected,
            "/target_detected",
            10
        )

        self.target_count = 0

        self.create_timer(
            5.0,
            self.publish_target
        )

        self.get_logger().info("Target Generator Started")

    ######################################################

    def publish_target(self):

        msg = TargetDetected()

        self.target_count += 1

        msg.target_id = f"enemy_{self.target_count}"

        msg.target_type = random.choice([
            "Enemy_UAV",
            "Enemy_UGV"
        ])

        msg.position.x = random.uniform(-20.0, 20.0)
        msg.position.y = random.uniform(-20.0, 20.0)
        msg.position.z = random.uniform(0.0, 10.0)

        msg.detected_by = "uav_01"

        msg.confidence = random.uniform(0.6, 1.0)

        self.pub.publish(msg)

        self.get_logger().info(
            f"Publish {msg.target_id} "
            f"({msg.position.x:.1f}, {msg.position.y:.1f})"
        )

def main(args=None):

    rclpy.init(args=args)

    node = TargetGenerator()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()