import math
num=0
while num>=0:
    a=math.sqrt(num)
    b=math.sqrt(num+168)
    if(a%1==0 and b%1==0):
        print("%d 是所求的数"%(num-100))
        break
    num+=1
