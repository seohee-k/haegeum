from haegeum_interfaces.msg import Assignment

from ai_commander.decision_engine import DecisionEngine


class Allocator:

    def __init__(self, battle_manager):

        self.battle_manager = battle_manager

        self.engine = DecisionEngine()

    def allocate(self, target):

        robots = self.battle_manager.get_friendlies()

        if len(robots) == 0:
            return None

        robot = self.engine.select_best_robot(
            robots,
            target
        )

        if robot is None:
            return None

        assignment = Assignment()

        assignment.target_id = target.target_id

        assignment.assigned_robot = robot.robot_id

        assignment.mission_type = "INTERCEPT"

        assignment.target_position = target.position

        return assignment