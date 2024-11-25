                  
#creating a dictionary
#phone={
 #   "john": 982628,
  #  "ria" : 468201,
   # "joy" : 126830
#}
#printing the dic
#print(phone)
#check the type of dic

#print(type(phone))
#check the length of dic
#print(len(phone))

#access items of dic
#print(phone["john"])
#print(phone.get("john"))

#print(phone.keys())
#phone["john"]=987654
#print(phone)

#add elements in the dic
#phone["kia"]=234567
#print(phone)

#add another dic
#more_phone={
 #   "shanivi": 654321
#}
#phone.update(more_phone)
#print(phone)
# remove element from dic
#phone.pop("john") 
#print(phone) 
#phone.popitem() #this will remove the last item from the dic
#print(phone)
#phone.clear() #this will empty the dic
#print(phone)
#printing value of dic
#for x in phone:
 #   print(x)
#    print(phone[x])
#for x,y in phone.items():
 #  print(x,y)
 

# nested dic
dict={
     "a": 100,
     "b": 200,
     "c": 300
}
print("the sum of dict value:",sum(dict.values()))
