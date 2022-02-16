class Animal:
        _name= ""
        _height= 0

        def __init__(self, name, height):
            self._name=name
            self._height=height
        
        def __str__(self):

            return "name:{} \nheight:{}\n".format(self._name, self._height)

        def get_name(self):
            return self._name
        def set_name(self, name):
            self._name = name

        def get_height(self):
            return self._name
        def set_height(self, height):
            self._height = height
        
        def get_type(self):
            print("Animal")


