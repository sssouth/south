def cude(num):      #创建函数
    pre=num     #将num赋值给pre
    if num==1:              #1是3的0次方
        print("%d是3的幂次方"%pre)
    elif num<0:             #若是负数,则输入错误
        print("输入数据错误")
    else:
        flag=1
        while flag:             #判断是否为3的幂次方(整除3,若商最终为1,则是3的幂次方)
            if num%3!=0:
                print("%d不是3的幂次方"%pre)
                flag=0
            else:
                num=num//3
            if num==1:
                print("%d是3的幂次方"%pre)
                flag=0
n_num=int(input("Please input n_num:"))
cude(n_num)
    
