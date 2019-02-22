def BIN(num):       #创建函数
    count=0      #count用来表示'1'的个数
    while 1:        #用二,十进制转换的方法,找出'1'
        if num%2==1:    
            count+=1
        num=num//2
        if num==0:
            break
    return count
num=int(input("Please input num:"))
print("%d的二进制中'1'有%d个"%(num,BIN(num)))
