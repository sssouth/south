def recog(a_list):
    adict={}
    for i in a_list:
        if i in adict:
            adict[i]+=1
        else:
            adict[i]=1
    flag=1
    for j in a_list:
        if adict[j]>1:
            flag=0
            break
    if flag==0:
        return 1
    else:
        return 0

alist=[12,35,6,78,49,98,21,23,21]
if recog(alist)==1:
    print("true")
else:
    print("false")

        
    
