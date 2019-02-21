nums=[1,23,5,6,16,7,9]
target=13
flag=1
i=0
while i<len(nums) and flag:
    for j in range(0,len(nums)):
        if nums[i]+nums[j]==target:
            print("nums[%d]+nums[%d]=%d"%(i,j,target))
            flag=0
            break
    i=i+1
print("两个数的下标为:%d,%d"%(i-1,j))
