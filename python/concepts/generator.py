# generators are an easy way to make iterators

def PowTwo(max = 0):
    n = 0
    while n< max:
        yield 2 ** n
        n+= 1

for i in PowTwo(3):
    print(i)
