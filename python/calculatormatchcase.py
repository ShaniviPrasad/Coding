# in case of writing the multiple if satement we can use the match case... for less typing..
'''
if x==1:
  #statement1
  elif x==2:
  #statement2
  elif x==3:
  #statement3

  in case of writing this think we can write 

match X:
  case1: #statement1
  case2: #statement2
  case3: #statement3
  case-: #default
'''
#calculator
num1 =int(input("enter the number1:"))
num2 =int(input("enter the number2:"))

operator= input("enter the operator:")

match operator:
    case "+":
          print("sum is :", num1 + num2)
    case "-" :
          print("difference:", num1 - num2) 
    case "*":
         print("multiplication:", num1 * num2)
    case "/":
          print("division:",num1 / num2)
    case "%":
          print("remainder:",num1 % num2)



