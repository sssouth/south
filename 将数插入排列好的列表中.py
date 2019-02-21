alist=[1,4,6,8,9,12,13,14,56,67,69,70,89,96]
num=int(input("Please input num:"))
for n in range(0,len(alist)):
    print("%2d\t"%alist[n],end='')
print("")
for i in range(0,len(alist)-1):
    if (num>=alist[i] and num<=alist[i+1]):
        t=i+1
alist.insert(t,num)
for m in range(0,len(alist)):
    print("%2d\t"%alist[m],end='')
