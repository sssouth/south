import string
letter=0
digit=0
space=0
other=0
str=input("Please input string:")
for a in str:
    if a.isalpha():
        letter+=1
    elif a.isdigit():
        digit+=1
    elif a.isspace():
        space+=1
    else:
        other+=1
print("There are %d letters,%d digits,%d spaces,%d others."%(letter,digit,space,other))
        
