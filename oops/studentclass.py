class Student:
    def __init__(self,name,marks_phy,marks_math,marks_chem):
        self.name=name
        self.marks_phy=marks_phy
        self.marks_phy=marks_math
        self.marks_chem=marks_chem

    def average(self ,marks_phy,marks_math, marks_chem):
       sum=marks_phy+marks_math+marks_chem
       avg=sum/3
       print("hi",self.name, "your avg score is:",avg)
        
s1=Student("karan",87,85,89)
s1.average(87,85,89)

                            