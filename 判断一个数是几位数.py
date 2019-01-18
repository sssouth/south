count=0
num=int(input("Please input num:"))
if num>=100000 or num<0:
    print("输入的数错误.")
else:
    a=num
    print("逆向输出各个数：")
    while a>0:
        x=a%10
        print("%d"%x)
        a=a//10
        count+=1
    print("%d是%d位数."%(num,count))
