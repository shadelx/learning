# iterator is an object you can iterated upon

# custom iterator

class PowTwo:
    def __init__(self, max=0):
        self.n = 0
        self.max = max

    def __iter__(self):
        return self

    def __next__(self):
        if self.n > self.max:
            raise StopIteration

        result = 2 ** self.n
        self.n += 1
        return result


# create an object
numbers = PowTwo(3)

# create an iterable from the object
i = iter(numbers)

# print iterator
for i in PowTwo(5):
    print(i)
for i in numbers:
    print(i)