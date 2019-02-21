def NUM(nums):      #定义函数
    a_list=[]
    b_list=[]
    for i in nums:      #为a_list添加nums中的元素
        a_list.append(i)
    for i in a_list:    #若元素为0,则在列表nums中删除,并添加在列表b_list中
        if i==0:
            b_list.append(0)
            nums.remove(0)
    nums.extend(b_list)       #将列表b_list添加在列表nums尾部
    print("输出修改后的列表:")
    for i in range(0,len(nums)):      #输出修改后的列表
        print("%d\t"%nums[i],end='')
    print("")
    
nums=[1,23,4,7,0,43,0,6,0,0,17,8]
print("输出原列表:")
for i in range(0,len(nums)):      #输出原列表
    print("%d\t"%nums[i],end='')
print("")
NUM(nums)
