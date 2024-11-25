 #creating a tuple
colour =("red","yellow","green")# packing of tuple

#creating a tuple with 1 item
#fruit=("aplle",)
fruit=tuple(("apple"))# one bracket tuple define another tuple constructor
#checking the type of tuple
#print(type(colour))
#check the length  of tuple
#print(len(colour))

#acessing items in tuple
#print(colour [0])
# doing negative indexing
#print(colour [-1])
#print(colour [1:3])# range indexing
#print(colour [-2:])# negative range indexing
#check if an item exists in tuple
#if "green" in colour:
   #print("green is part of tuple")
   #triverse the tuple
   #for i in colour:
    #   print(i)
#concatenate 2 tuple
#mor_colour=("blue", "brown")
#colour=colour + mor_colour
#print(colour)


#unpacking the tuple
colour1 , colour2 , colour3=colour
print(colour1)
print(colour2)
print(colour3)

