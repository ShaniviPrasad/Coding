n=int(input("enter the size of the list"))

list=[]
for _ in range(n):
    num=int(input("enter the elements "))
    list.append(num)
idx1=int(input("enter index1:"))
idx2=int(input("enter the index2:")) 
print(list)
#swappping value at idx1 and idx2
temp=list[idx1]
list[idx1]=list[idx2]
list[idx2]=temp
print(list)

