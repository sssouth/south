import string

str=input("Please input str:")#输入一个字符串
print(str)
STR=str.upper()#将所有小写转换成大写
print(STR)
fo=open("text.txt","w")#打开文件
fo.write(STR)#将字符串写入文件
fo.close()#关闭文件
print("文件是否被关闭:%s"%fo.closed)#判断文件是否被关闭,若返回true,则关闭
