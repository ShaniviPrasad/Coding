n=int(input("enter the size of the list"))

list=[]
for _ in range(n):
    num=int(input("enter the elements "))
    list.append(num)
print(list)
list.sort()
print("lowest value:", list[0])
list.sort(reverse=True)
print("highest value", list[0])




