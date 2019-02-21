n_um=num=int(input("Please input num:"))
alist=[]
flag=1
while flag:
    for i in range(2,n_um):       #找出质数,作为除数,即质因数
        f=1
        for j in range(2,i):        #找出因数
            if i%j==0:
                f=0
                break
        if f==0:                #若不是因数,继续寻找
            continue
        else:                   #若是因数,继续执行
            if num%i==0:
                a=i
                b=num//i
                num=b
                alist.append(a)#将质因数保存到列表里
            else:
                continue
        n=1
        for m in range(2,num):#判断是否为质因数,若不是,继续分解
            if num%m==0:
                n=0
                break
        if n==1:
            flag=0
            break
alist.append(num)
print("%d="%n_um,end='')        #输出数的质因数形式
count=0
for x in range(0,len(alist)):
    print("%d"%alist[x],end='')
    count+=1
    if count<len(alist):
        print("*",end='')
