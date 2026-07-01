import math


class Allocator:

    def allocate(self, robots, target):

        best_robot = None
        best_distance = 999999999

        for robot in robots:

            dx = robot.pose.position.x - target.position.x
            dy = robot.pose.position.y - target.position.y
            dz = robot.pose.position.z - target.position.z

            distance = math.sqrt(
                dx * dx +
                dy * dy +
                dz * dz
            )

            if distance < best_distance:

                best_distance = distance
                best_robot = robot

        return best_robot