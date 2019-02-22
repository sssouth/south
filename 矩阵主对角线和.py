a_list=[[1,2,3],[1,2,3],[1,2,3]]    #创建一个矩阵
for i in range(0,3):    #输入矩阵
    for j in range(0,3):
        num=int(input("Please input num:"))
        a_list[i][j]=num
print("3*3矩阵:")
for i in range(0,3):    #输出矩阵
    for j in range(0,3):
        print("%d\t"%a_list[i][j],end='')
    print("")
sum=0
for i in range(0,3):
        sum+=a_list[i][i]   #求主对角线和
print("矩阵的主对角线之和为:%d"%sum)
