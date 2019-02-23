str=input("Please input str:")#输入一个字符串
fo=open("string.txt","w")#打开文件
for i in str:
    if i!='#':
        fo.write(i)#将字符串逐个输入文件中,直到输入一个'#'
    else:
        fo.write(i)
        break
fo.close()#关闭文件
print("文件是否被关闭:",end='')#判断是否关闭文件,返回true表示关闭
print(fo.closed)
