//题目：给定一个数组 nums,编写一个函数将所有 0 移动到数组的末尾,同时保持非零元素的相对顺序.
#include <stdio.h>
int *array(int A[],int n);
int *array(int A[],int n)//返回指针型函数 
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(A[i]==0)//将0元素移到末尾 
		{
			for(j=i;j<n-1;j++)
			{
				A[j]=A[j+1];
			}
			A[n-1]=0;
		}
	}
	return A;
}
int main(void)
{
	int nums[10]={12,0,23,4,0,56,51,61,0,90};
	int i; 
	printf("输出原数组:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",nums[i]);
	}
	printf("\n");
	array(nums,10);//调用函数 
	printf("输出改变后数组:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",nums[i]);
	}
	return 0;
}
