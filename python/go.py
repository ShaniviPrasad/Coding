n=int(input("enter the n number of series"))
a=int(input("enter the first number of the series"))
r=int(input("enter the common ratio"))


for i in range(1,n+1,1):
    sum=a((a*(r**n)-1)/r-1)
    print(sum)
    
    

