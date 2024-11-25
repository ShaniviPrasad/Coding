class Demo:
    x=5
    def Display(self,x):
        x=30
        print('local variable',x)
        print('inatance variable',self)
        D1=Demo()
        D1.Display(50)
