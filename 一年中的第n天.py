year,month,day=eval(input("Please input year,month,day:"))
list=[(1,31),(2,28),(3,31),(4,30),(5,31),(6,30),(7,31),(8,31),(9,30),(10,31),(11,30),(12,31)]
sum=0
for i in range(0,12,1):
    if month>list[i][0]:
       sum=sum+list[i][1]
sum=sum+day
if (year%4==0 and year%100!=0) or year%400==0:
    if month<=2:
        print("%d年%d月%d日是这一年的第%d天"%(year,month,day,sum))
    else:
        print("%d年%d月%d日是这一年的第%d天"%(year,month,day,sum+1))
else:
    print("%d年%d月%d日是这一年的第%d天"%(year,month,day,sum))
    
