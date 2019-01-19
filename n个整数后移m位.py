n=int(input("请输入整数的个数n:"))
m=int(input("请输入向后移的位数m:"))
a_list=[]
for i in range(n):
    num=int(input("Please input num:"))
    a_list.append(num)
b_list=a_list[0:n-m:1]
c_list=a_list[n-m:n:1]
a_list=c_list+b_list
print(a_list)
