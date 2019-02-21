a_list=[1,3,23,61,51,23,4,6,61,1,51,3,4]
a_dict={}
for i in a_list:
    if i in a_dict:
        a_dict[i]+=1
    else:
        a_dict[i]=1
for j in a_dict:
    if a_dict[j]==1:
        print("a_list中%d只出现了一次"%j)
        break
