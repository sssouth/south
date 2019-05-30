/*给定一个正整数数组 nums，找出该数组内乘积小于 k 的连续的子数组的个数。

示例 1:
输入: nums = [10,5,2,6], k = 100
输出: 8
解释: 8个乘积小于100的子数组分别为: [10], [5], [2], [6], [10,5], [5,2], [2,6], [5,2,6]。
需要注意的是 [10,5,2] 并不是乘积小于100的子数组。
说明:
0 < nums.length <= 50000
0 < nums[i] < 1000
0 <= k < 10^6 */
#include <stdio.h>
#include <stdlib.h>
#define N 50000

int Search(int data[],int n,int k);

main()
{
	int n,i,k;
	int data[N];
	printf("Please input array's length:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	printf("Please input k:");
	scanf("%d",&k);
	printf("连续的子数组的个数 %d\t",Search(data,n,k));
}

int Search(int data[],int n,int k)
{
	int count=0,sum=1,i,j;
	for(j=0;j<n;j++)
	{
		for(i=j,sum=1;i<n;i++)
		{
			sum*=data[i];
			if(sum<k)
				count++;
			else
				break;
		}
	}
	return count;
}
