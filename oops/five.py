class Demo:
    pi=0
    r=0
    def __init__(self):
        self.pi=3.14
        self.r=5

    def area(self):
        print(self.pi * self.r**2)
d1=Demo()
d1.area()