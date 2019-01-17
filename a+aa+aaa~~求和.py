n=int(input("Please input n:"))
a=6
num=0
list=[]
for i in range(0,n,1):
    num=num+a*10**i
    list.append(num)
s=sum(list)
print("a+aa+aaa+a...a的值为%d"%s)
