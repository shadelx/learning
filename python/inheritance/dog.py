from animal import Animal

class Dog(Animal):
    __owner = ""

    def __init__(self, name, height, owner):
        super().__init__(name, height)
        self.__owner = owner
    def __str__(self):
        return super().__str__()+"owner:{}".format(self.__owner)
    
    def get_owner(self):
        return self.__owner
    def set_owner(self, owner):
        self.__owner = owner
    
    def get_type(self):
        print("Dog")

    def test(self):
        print(Dog._name)