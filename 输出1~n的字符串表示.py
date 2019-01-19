n=int(input("Please input n:"))
a_list=[]
count=0
for i in range(1,n+1,1):
    a=str(i)
    a_list.append(a)
for b in a_list:
    count+=1
    if count%3==0 and count%5==0:
        print("'FizzBuzz'")
    elif count%3==0:
        print("'Fizz'")
    elif count%5==0:
        print("'Buzz'")
    else:
        print(b)
 
