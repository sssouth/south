count=0
list=[]
for num in range(100,200,1):
    flag=0
    for a in range(2,num):
        if num%a==0:
            flag=1
            break
    if flag==0:
        count+=1
        list.append(num)
    else:
        pass
print("100-200之间有 %d 个素数,分别是"%count,list)
