list=[]
for i in range(0,10,1):
    num=int(input("Please input num:"))
    list.append(num)
list.sort()
print("10个数由小到大排序为：")
for a in list:
    print(a)
