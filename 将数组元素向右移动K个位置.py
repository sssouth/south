alist=[1,2,3,4,5,6,7,8,9]
leng=len(alist)
print("原始列表:")
for i in range(0,leng): #输出原始列表
    print("%d\t"%alist[i],end='')
print("")
k=int(input("Please input k:"))     #判断K是否符合要求
if k<0:
    print("输入k错误")
else:
    k=k%leng
    for i in range(0,k):        #改变数组
        t=alist[leng-1]
        for j in range(-1,-leng,-1):
            alist[j]=alist[j-1]
        alist[j-1]=t
print("改变后的数组:")
for i in range(0,leng):     #输出改变后的数组
    print("%d\t"%alist[i],end='')
print("")
