a_list=[0,1,2,3,4,5,7,8,9]
m=len(a_list)
for i in range(0,m+1,1):
    if i not in a_list:
        print("%d是没有出现在列表的数."%i)
