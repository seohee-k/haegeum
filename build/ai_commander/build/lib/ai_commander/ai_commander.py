import rclpy

from rclpy.node import Node

from geometry_msgs.msg import Point

from haegeum_interfaces.msg import Assignment


class AICommander(Node):

    def __init__(self):

        super().__init__("ai_commander")

        self.publisher = self.create_publisher(
            Assignment,
            "/assignment",
            10
        )

        self.timer = self.create_timer(
            10.0,
            self.send_order
        )

        self.get_logger().info("AI Commander Started")

    def send_order(self):

        msg = Assignment()

        msg.target_id = "enemy_01"

        msg.assigned_robot = "uav_01"

        msg.mission_type = "INTERCEPT"

        msg.target_position = Point()

        msg.target_position.x = 100.0
        msg.target_position.y = 50.0
        msg.target_position.z = 30.0

        self.publisher.publish(msg)

        self.get_logger().info("Assignment Published")


def main():

    rclpy.init()

    node = AICommander()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == "__main__":
    main()