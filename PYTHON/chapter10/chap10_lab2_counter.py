class Counter:
    def __init__(self):
        self.count = 0

    def reset(self):
        self.count = 0

    def increment(self):
        self.count += 1

    def Get(self):
        return self.count


counter = Counter()
counter.increment()
counter.increment()
print(counter.Get())
counter.reset()
print(counter.Get())
