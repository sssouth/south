n=int(input("Please input n:"))
num=1
a=1
b=1
if n<=2:
    print("第%d个数是%d"%(n,num))
else:
    for i in range(3,n+1,1):
       num=a+b
       a=b
       b=num
    print("第%d个数是%d"%(n,num))
