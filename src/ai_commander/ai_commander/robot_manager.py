from haegeum_interfaces.msg import RobotStatus


class RobotManager:

    def __init__(self):
        self.robots = {}

    def update(self, msg: RobotStatus):

        self.robots[msg.robot_id] = msg

    def get_all(self):
        return self.robots

    def get_available_uavs(self):

        result = []

        for robot in self.robots.values():

            if robot.robot_type != "UAV":
                continue

            if robot.busy:
                continue

            result.append(robot)

        return result