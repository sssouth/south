a_list=[]
n=int(input("请输入你想比较的数的个数n:"))
for i in range(n):
    num=float(input("Please input num:"))
    a_list.append(num)
a_list.sort()
for i in range(n):
    print("%.1f"%a_list[i])
