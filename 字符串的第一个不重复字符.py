string=input("Please input string:")
dic={}
flag=1
for i in string:
    if i in dic:
        dic[i]+=1
    else:
        dic[i]=1
for a in dic:
    if dic[a]==1:
        print("字符串中的第一个不重复字符:%s,其索引为%d."%(a,string.find(a)))
        flag=0
        break
if flag==1:
    print(-1)
