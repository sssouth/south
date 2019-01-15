num=int(input("Please input num:"))
if (num>=10000 and num<100000):
    ge=num%10
    shi=num%100//10
    qian=num%10000//1000
    wan=num//10000
    if (ge==wan and shi==qian):
        print("%d 是一个回文数."%num)
    else:
        print("%d 不是一个回文数."%num)
else:
    print("%d 不是一个回文数."%num)
