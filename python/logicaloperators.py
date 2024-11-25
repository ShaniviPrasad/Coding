#this work with boalean value
'''
and - return if both statements are true
T  T= T
T  F= F
F  F=F
or - returns true if one of thr statement is true
T  T=T
F  F=F
T  F=T
Not- reverse the result, returns False if the result is true

F=T
T=F'''
exp1 =2>1 #T
exp2 =5<4 #F
print("exp1 and exp2:", exp1 and exp2)
print("exp1 or exp2:",exp1 or exp2)
print("not exp:",not(exp1))
