def output(b):
    for i in range(0,5):
        for j in range(0,3):
            print("%s\t"%b[i][j],end='')
        print("")
def Input(a):   #输入函数
    for i in range(0,5):
        a[i][0]=input("Please input identity:")#输入学号
        a[i][1]=input("Please input name:")#输入姓名
        a[i][2]=input("Please input number:"#)输入班号
                      
a_list=[[0,0,0],[0,0,0],[0,0,0],[0,0,0],[0,0,0]]#创建一个列表,存储内容
print("学号\t姓名\t班号")
Input(a_list)
output(a_list)                      
#def output(b):      #输出函数
 #   for i in range(0,5):
  #      for j in range(0,3):
   #         print("%s\t"%b[i][j],end='')
    #    print("")
                      
#a_list=[[0,0,0],[0,0,0],[0,0,0],[0,0,0],[0,0,0]]#创建一个列表,存储内容
#print("学号\t姓名\t班号")
#Input(a_list)
#output(a_list)
