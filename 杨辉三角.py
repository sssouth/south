num=int(input("Please input num:"))#表示打印到第num层
L1=[1]  #表示第一层
L2=[1,1]  #表示第二层
if num==1:  #讨论num的取值
    print(L)
else:
    print(L1)
    print(L2)
    for i in range(2,num):
        r=[]    #r用来存储有规律的的数值
        for j in range(0,len(L2)-1):
            r.append(L2[j]+L2[j+1])
        L2=L1+r+L1
        print(L2)
        
    
