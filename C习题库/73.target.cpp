//题目：给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那两个整数,并返回他们的数组下标.
//你可以假设每种输入只会对应一个答案.但是，你不能重复利用这个数组中同样的元素.
#include <stdio.h>
int main(void)
{
	int nums[10]={12,3,6,8,19,34,74,67,61,20};
	int target=69;
	int i,j;
	for(i=0;i<9;i++)//循环，让数组的数两两相加 
	{
		for(j=i+1;j<10;j++)
		{
			if(nums[i]+nums[j]==target)
			{
				break;
			}
		}
		if(nums[i]+nums[j]==target)
			break;
	}
	printf("%d+%d=%d,%d的下标是%d,%d的下标是%d",nums[i],nums[j],target,nums[i],i,nums[j],j);
	return 0;
}
