alist=[]
num=int(input("Please input num:"))
for i in range(0,num):      #输入列表
    a=int(input("Please input a:"))
    alist.append(a)
print("原始列表:")
for i in range(0,num):      #输出原始列表
    print("%d\t"%alist[i],end='')
print("")
a_min=alist[num-1]      #找出最小值,与最后一个元素交换
m=0
for i in range(0,num):
    if alist[i]<a_min:
        a_min=alist[i]
        m=i
if m!=num-1:
    alist[num-1],alist[m]=alist[m],alist[num-1]
print("改变后的列表:")
for i in range(0,num):      #输出改变后的列表
    print("%d\t"%alist[i],end='')
print("")
    
a_max=alist[0]          #找出最大值,与第一个元素交换
h=0
for i in range(0,num):
    if alist[i]>a_max:
        a_max=alist[i]
        h=i
if h!=0:
    alist[0],alist[h]=alist[h],alist[0]
print("改变后的列表:")
for i in range(0,num):      #输出改变后的列表
    print("%d\t"%alist[i],end='')
print("")
