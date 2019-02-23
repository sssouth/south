fo_a=open("A","w")#打开文件A并输入字母到文件中
str1=input("请输入字母(只能输入字母):")
fo_a.write(str1)
fo_b=open("B","w")#打开文件B并输入字母到文件中
str2=input("请输入字母(只能输入字母):")
fo_b.write(str2)
fo_a.close()#关闭文件A,B
fo_b.close()

fo_a=open("A","r")
fo_b=open("B","r")
#将A和B的内容合并在一起,存放在STR中
STR=fo_a.read(len(str1))+fo_b.read(len(str2))
fo_a.close()#关闭文件A,B
fo_b.close()
#将STR中的内容按照字母顺序排序
LIST=list(STR)
LIST.sort()
STR="".join(LIST)
print(STR)
#将STR写入文件
fo_c=open("C","w")
fo_c.write(STR)
fo_c.close()

