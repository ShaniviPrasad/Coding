'''

#function which take two as input and add
def add(n1,n2):
    print("n1:",n1)
    print("n2:",n2)

    sum=n1+n2
    return sum
#x=2
#y=3
#print("sum is:",add(x,y))
#postion argument
#print("the sum is :",add(2,3))
'''
#keyword argument(named argument)
#print("the sum is:",add(n2=2,n1=3))


#arbitary argument

def addAllnumber(*args):
    sum=0
    for i in args:
        sum+=i
        return sum
    
output = addAllnumber(1,2,3,4,5) 
print("the sum is",output)

  

 

