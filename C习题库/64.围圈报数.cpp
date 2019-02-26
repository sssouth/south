//题目：有n个人围成一圈,顺序排号.从第一个人开始报数（从1到3报数）,凡报到3的人退出圈子,问最后留下的是原来第几号的那位.
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,n,sum,count=0;
	int *A;
	printf("请输入n:\n");//n表示共有几人围圈 
	scanf("%d",&n);
	sum=n;
	A=(int *)malloc(n*sizeof(int));//动态内存空间 
	if(A==NULL)
	{
		printf("地址分配失败\n");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			A[i]=i+1;//数组的每一个元素代表每个人的编号 
		}
		
		while(true)
		{
			for(i=0;i<n;i++)
			{
				if(A[i]!=0)
				{
					count++;
					if(count==3)//count=3表示报数为3，A[i]=0表示报数为3的人删除 
					{
						count=0;
						A[i]=0;
						sum--;//sum表示所剩的人数 
					}
				}
			}
			if(sum==1)//最后一人 
				break;
		}
		for(i=0;i<n;i++)
		{
			if(A[i]!=0)
			{
				printf("最后留下的是原来第%d位.",A[i]);//找出最后一人 
			}
		}
	}
	return 0;
}
