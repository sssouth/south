def Matrix(array):      #输入矩阵函数
    for i in range(0,3):
        for j in range(0,3):
            array[i][j]=int(input("Please input num:"))
def output(ary):        #输出矩阵函数
    print("输出矩阵:")
    for i in range(0,3):
        for j in range(0,3):
            print("%d\t"%ary[i][j],end='')
        print("")
        
a_list=[[0,0,0],[0,0,0],[0,0,0]]    #3个矩阵
b_list=[[0,0,0],[0,0,0],[0,0,0]]
c_list=[[0,0,0],[0,0,0],[0,0,0]]

print("请输入3*3矩阵:")  #输入矩阵a_list
Matrix(a_list)
print("请输入3*3矩阵:")  #输入矩阵b_list
Matrix(b_list)
for i in range(0,3):
    for j in range(0,3):
        c_list[i][j]=a_list[i][j]+b_list[i][j]  #矩阵相加作和
output(a_list)  #输出3个矩阵
output(b_list)
output(c_list)
