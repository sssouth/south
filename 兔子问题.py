month=int(input("Please input month: "))
a=1
b=1
sum=1
if month<=2:
    print("%d月后有%d个兔子"%(month,sum))
else:
    for i in range(3,month+1,1):
        sum=a+b
        a=b
        b=sum
    print("%d月后有%d个兔子."%(month,sum))
