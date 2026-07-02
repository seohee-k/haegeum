from dataclasses import dataclass
from typing import Dict

from geometry_msgs.msg import Pose
from geometry_msgs.msg import Point

@dataclass
class RobotInfo:
    robot_id: str
    robot_type: str
    pose: Pose
    battery: float
    state: str


# @dataclass
# class TargetInfo:
#     target_id: str
#     target_type: str
#     pose: Pose
#     threat: float


@dataclass
class TargetInfo:
    target_id: str
    target_type: str
    position: Point
    confidence: float

class BattleManager:

    def __init__(self):

        self.friendlies: Dict[str, RobotInfo] = {}
        self.targets: Dict[str, TargetInfo] = {}

    # -----------------------------
    # Friendly Robot
    # -----------------------------

    def update_robot(self, robot: RobotInfo):
        self.friendlies[robot.robot_id] = robot

    def get_robot(self, robot_id: str):
        return self.friendlies.get(robot_id)

    def get_friendlies(self):
        return self.friendlies

    # -----------------------------
    # Target
    # -----------------------------

    def update_target(self, target: TargetInfo):
        self.targets[target.target_id] = target

    def remove_target(self, target_id: str):
        if target_id in self.targets:
            del self.targets[target_id]

    def get_target(self, target_id: str):
        return self.targets.get(target_id)

    def get_targets(self):
        return self.targets

    # -----------------------------
    # Debug
    # -----------------------------

    def print_summary(self):

        print("\n========== Battlefield ==========")

        print("\nFriendly Robots")

        for robot in self.friendlies.values():

            print(
                f"{robot.robot_id} | "
                f"{robot.robot_type} | "
                f"{robot.state} | "
                f"Battery={robot.battery:.1f}% | "
                f"({robot.pose.position.x:.2f}, "
                f"{robot.pose.position.y:.2f}, "
                f"{robot.pose.position.z:.2f})"
            )

        print("\nTargets")

        for target in self.targets.values():

            print(
                f"{target.target_id} | "
                f"Confidence {target.confidence:.2f} | "
                f"({target.position.x:.2f}, "
                f"{target.position.y:.2f}, "
                f"{target.position.z:.2f})"
            )

        print("===============================\n")