def add(a : int, b : int) -> int :
    return a + b

class Person:
    __name = ""
    __age = 0

    def __init__(self, name:str ="none", age:int = 0):
        self.__name = name
        self.__age = age
    
    def __str__(self) -> str:
        return "name : {}\nage : {}\n".format(self.__name, self.__age)

print(add(1,2))
John  = Person("john", 20)
print(John)
