import math

from ai_commander.battle_manager import RobotInfo, TargetInfo


class DecisionEngine:

    def __init__(self):

        # 가중치
        self.distance_weight = 0.5
        self.battery_weight = 0.3
        self.state_weight = 0.2

    def calculate_distance(self, robot: RobotInfo, target: TargetInfo):

        dx = robot.pose.position.x - target.position.x
        dy = robot.pose.position.y - target.position.y
        dz = robot.pose.position.z - target.position.z

        return math.sqrt(dx * dx + dy * dy + dz * dz)

    def calculate_score(self, robot: RobotInfo, target: TargetInfo):

        distance = self.calculate_distance(robot, target)

        # 가까울수록 높은 점수
        distance_score = max(0.0, 100.0 - distance)

        # 배터리 그대로 사용
        battery_score = robot.battery

        # 현재 임무 상태
        if robot.state == "IDLE":
            state_score = 100.0

        elif robot.state == "PATROL":
            state_score = 70.0

        elif robot.state == "RETURN":
            state_score = 20.0

        else:
            state_score = 10.0

        score = (

            distance_score * self.distance_weight +

            battery_score * self.battery_weight +

            state_score * self.state_weight

        )

        return score

    def select_best_robot(self, robots, target):

        best_robot = None
        best_score = -1.0

        for robot in robots.values():

            score = self.calculate_score(robot, target)

            print(
                f"[Decision] {robot.robot_id} "
                f"Score={score:.2f}"
            )

            if score > best_score:

                best_score = score
                best_robot = robot

        return best_robot