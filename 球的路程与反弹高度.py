n=int(input("plaese input n:"))                   #第n次下落
h=100
sum=100                                           #sum表示经过的路程
if n==1:
    print("第%d次下落时共经过%f米."%(n,sum))
    print("第%d次反弹高%f米."%(n,h/2))
else:
    for i in range(2,n+1,1):
        h=h/2
        sum=sum+2*h
    print("第%d次下落时共经过%f米."%(n,sum))
    print("第%d次反弹高%f米."%(n,h/2))
    
     
