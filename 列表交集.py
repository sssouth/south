def mutual(a_list,b_list,c_list):   #创建交集函数
    for i in a_list:
        for j in b_list:
            if i==j:
                c_list.append(i)        #将a_list和b_list的公共元素放入c_list
    return
a_list=[1,56,4,2,7,81,51,61,9,66]
b_list=[2,3,4,57,51,66,9,70,34,1]
c_list=[]
mutual(a_list,b_list,c_list)
print("列表a_list中的元素:")      #输出a_list中元素
for i in a_list:
    print("%d\t"%i,end='')
print("")
print("列表b_list中的元素:")      #输出b_list中元素
for i in b_list:
    print("%d\t"%i,end='')
print("")
print("列表c_list中的元素(a_list和b_list的交集):")
for i in c_list:                #输出c_list中元素,即交集
    print("%d\t"%i,end='')
    

    
