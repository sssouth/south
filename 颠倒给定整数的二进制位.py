n_um=num=int(input("Please input num:"))
alist=[]
while 1:
    a=num%2
    num=num//2
    if num!=0:
        alist.append(a)
    else:
        alist.append(a)
        break
print(n_um)
for j in range(-1,-len(alist)-1,-1):
    print("%d"%alist[j],end='')
print("")
for i in range(0,len(alist)):
    print("%d"%alist[i],end='')
    
