a=1
b=2
sum=0
for i in range(1,21,1):
    sum=sum+b/a
    x=a+b
    a=b
    b=x
print("2/1+3/2+...=%f"%sum)
