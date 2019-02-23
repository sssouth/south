#给出一个 32 位的有符号整数,你需要将这个整数中每位上的数字进行反转.

num=int(input("Please input num:"))#输入任意数字
print("原始数字:%d"%num)
n=str(num)  #将数字转化为字符串
m=list(n)  #将字符串转化为列表
m.reverse()  #倒置列表
n="".join(m)  #连接字符串
ch_num=int(n)  #强制转换为整数
print("改变后的数字:%d"%ch_num)
