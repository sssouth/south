n=int(input("Please input n:"))
if n%2==0:
    way=(n/2)+1
else:
    way=(n+1)/2
print("%d 种方法可以爬上楼."%way)
