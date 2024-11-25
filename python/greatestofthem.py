a=int(input("enter the first number"))
b=int(input("enter the second number"))
c=int(input("enter the third number"))
if a>b and a>c:
    print("greatest number:",a)
elif b>a and b>c:
    print("greatest number:",b)
else:
    print("greatest number:",c)
