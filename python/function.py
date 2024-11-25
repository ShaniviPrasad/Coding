#sum of number
def sumOneTON(n):
    sum=0
    for i in range(1,n+1):
        sum=sum+i
        return sum
#call function
n=int(input("enter the number"))
output=sumOneTON(n)
print("sum of all number till n is:", output)    
n1=int(input("enter the number"))
output1=sumOneTON(n1)
print("sum of all number till n is:", output1)    