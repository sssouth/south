#英文文档词频以英文原著爱丽丝梦游仙境为例,统计每个词在整部小说中出现的频率,并按词频从大到小进行排序.由于整本书所包含单词较多,为了便于展示,只输出词频大于10的单词.

fo=open("爱丽丝梦游仙境.txt","r")#打开文件,将文件的内容以列表形式一行行读到a_list中
a_list=fo.readlines()
fo.close()

factors='ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwsyz1234567890'#所有可能出现的字母或数字
STR=''#建立一个空字符串,
#将列表a_list中的内容输入到字符串STR中
for i in a_list:
    str=''
    for j in i:
        if j in factors:
            str=str+j
    STR=STR+str
LIST=STR.split(' ')#将字符串转化为列表
a_dict={}
for i in LIST:#将列表转化为字典
    if i in a_dict:
        a_dict[i]+=1
    else:
        a_dict[i]=1
paixu=sorted(a_dict.items(),key=lambda X:X[1])#按照字典的值进行排序
count=0
for i in range(0,len(paixu)):#若单词出现的频率大于10,则输出,并10个为一行
    if paixu[i][1]>10:
        count+=1
        print("%s\t"%paixu[i][0],end='')
        if count==10:
            count=0
            print("")
        
