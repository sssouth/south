def even(n):
    sum=0
    for i in range(2,n+1,2):
        sum=sum+1/i
    return sum
def odd(n):
    sum=0
    for i in range(1,n+1,2):
        sum=sum+1/i
    return sum
num=int(input("Please input num:"))
if num%2==0:
    print("1/2+1/4+...+1/%d=%f"%(num,even(num)))
else:
    print("1+1/3+...+1/%d=%f"%(num,odd(num)))
