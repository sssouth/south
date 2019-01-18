count=0
n=int(input("Please input n;"))
if n>3:
    for num in range(2,n,1):
        flag=0
        for i in range(2,num,1):
            if num%i==0:
                flag=1
                break
        if flag==0:
            count+=1
        else:
            pass
    print("小于非负正整数n的质数的个数:%d"%count)
else:
    print("输入的n错误.")
