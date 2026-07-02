class TargetManager:

    def __init__(self):

        self.next_id = 1

    def generate_id(self):

        target = f"enemy_{self.next_id}"

        self.next_id += 1

        return target