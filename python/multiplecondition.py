'''multiple contition using 'and' and 'or'
logical operator-help us in containing the result of 2 condition
'''
english_marks=int(input("enter the english marks"))
maths_marks=int(input("enter the maths marks"))
# if both are more than 80,print A grade
if english_marks>80 and maths_marks>80:
    print("A grade")
    # if either of the marks are more than 80, B grade

elif english_marks<80 or maths_marks<80:
    print("B grade")
    # if neither of marks are 80, print C grade
else:
    print("C grade")

