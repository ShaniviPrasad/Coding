num=int(input("enter the number"))
if num%5==0 or num%3==0:
    print("number is divisible by 3 or 5:",)
    if num%15!=0:

        print("number is not divisible by 15:",num)
    else:
        print("number is divisible bye 15:",num)
else:
    print ("number is neither divisible by 5 nor 3:",num)

'''
if num % 15==0:
    print(" number is divisible by 15")
else:
   if num %3 or num%5:
      print("number is not divisible by 15 but divisible by 3 or 5 ")
   else:
   print("number is neither divisible by 3 nor by 5")
'''       