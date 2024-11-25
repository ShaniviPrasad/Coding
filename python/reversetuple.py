# for reversing the tuple value
input_tuple=(1,2,3,4,5,6)
list=[]

#added reverse value in a list
for x in reversed(input_tuple):
  list.append(x)

output_tuple=tuple(list) # typecasting the list int0 tuple
print(output_tuple)