#nestedif_else -multiple condition/decision making complex
#another method 
n1=int(input("enter the first number"))
n2=int(input("enter the second number"))
n3=int(input("enter the third number"))
# comparing n1 & n2
if n1>n2:
        # either n1 or n3 is greatest 
        if n1>n3:
            print("greatest number:",n1)
        else:
            print("greatest number:",n3)
else:
    if n2>n3:
       # either n2 or n3 is greatest 
       print("greatest number:",n2)
    else:
         print("greatest number:",n3) 
         
