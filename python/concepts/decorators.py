#   a decorator takes in a function, adds some functionality and returns it
#   functionaly example
def make_pretty(func):
    def inner():
        print("I got decorated")
        func()
    return inner


def ordinary():
    print("I am ordinary")

ordinary = make_pretty(ordinary)
ordinary()

# this is the same as:
# @make_pretty
# def ordinary():
#     print("I am ordinary")

#second example
def smart_divide(func):
    def inner(a, b):
        print("I am going to divide", a, "and", b)
        if b == 0:
            print("Whoops! cannot divide")
            return

        return func(a, b)
    return inner


@smart_divide
def divide(a, b):
    print(a/b)

divide(2,5)
divide(2,0)