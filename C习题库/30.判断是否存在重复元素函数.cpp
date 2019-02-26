//30题目：给定一个整数数组,判断是否存在重复元素.如果任何值在数组中出现至少两次,函数返回 true.如果数组中每个元素都不相同,则返回 false.
#include <stdio.h>
int judge(int A[],int n);
int judge(int A[],int n)
{
	int i,j,flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[i]==A[j])//判断是否有相同元素 
				flag=1;
		}
	}
	if(flag==1)
		return 1;
	else
		return 0;
}
int main(void)
{
	int a[10];
	int i;
	printf("请输入数组元素:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	if(judge(a,10))
		printf("true");
	else
		printf("false");
	return 0;
}
