n=int(input("Please input n:"))         #n表示n个人围圈
a_list=[]                   #将n个人输入列表中
for i in range(1,n+1):
    a_list.append(i)
count=0
leng=len(a_list)            #列表长度
while 1:
    if leng==1:         #如果长度为一,则表明只剩下一位人,结束游戏
        break
    i=0
    while 1:
        count+=1
        if count==3:        #3表示报到3的人,并删去报3的人
            a_list.remove(a_list[i])
            count=0
            i-=1        #删去一个元素之后,后面的元素会向前移动,故i-1
        i+=1
        leng=len(a_list)
        if i>=leng:         #防止下标越界
            break
print("最后留下来的是%d,原来的第%d位"%(a_list[0],a_list[0]))
