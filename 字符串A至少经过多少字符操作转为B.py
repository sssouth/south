#(最小编辑距离.)设A和B是2个字符串,字符串A至少要经过多少字符操作转换为字符串B.

A=input("Please input stringA:")#任意输入两个字符串A,B
B=input("Please input stringB:")
d=[]#创建一个列表,用来存放最少操作步骤
#给列表赋初值0
for j in range(0,len(B)+1):
    a_list=[]
    for i in range(0,len(A)+1):
        a_list.append(0)
    d.append(a_list)
#计算出最少操作步骤
for i in range(1,len(B)+1):
    d[i][0]=i
for j in range(1,len(A)+1):
    d[0][j]=j
for i in range(1,len(B)+1):
    for j in range(1,len(A)+1):
        #最少操作步骤
        if A[j-1]==B[i-1]:
            MIN=d[i-1][j-1]
        else:
            MIN=d[i-1][j-1]+1
        d[i][j]=min(min(d[i-1][j]+1,d[i][j-1]+1),MIN)
print("字符串A至少要经过%d个字符操作转换为字符串B"%d[i][j])    
