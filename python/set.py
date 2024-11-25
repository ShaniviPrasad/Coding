#creating  set
names={ "sita", "mia","Tia"}

#print set
print(names)
#length of set
print(len(names))
# check the data type
print(type(names))

#acessing the items of set
#for x in names:
   # print(x)

# check if an item is in a set
#if "sita" in names:
 #   print("sita is in the set")

# add elements in a set

#names.add("ria")
#print(names)

#add another sequence in a set
#names_list=["ria","kia"]
#names.update(names_list)
#print(names)

# removing the element from a set
#names.remove("Ria")# INCASE OF REMOVE FUNCTION WE CAN USE DECARD FUNCTION DONT SHOW THE ERROR

#print(names)

#joining 2 sets
s1={'a','b','c'}
s2={'d','e','a'}
print(s1,s2)

s3=s1.union(s2)
print(s3)

#update s1 will have the s2 value
s1.update(s2)
print(s1) 