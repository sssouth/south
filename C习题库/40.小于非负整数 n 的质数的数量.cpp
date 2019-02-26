//题目：统计所有小于非负整数 n 的质数的数量.
#include <stdio.h>
int main(void)
{
	int n,count=0,flag,i,j;
	printf("请输入n(非负):\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		flag=1;//判断是否是素数 
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			count+=1;//统计素数的个数 
		}
	}
	printf("小于非负整数%d的质数的数量为%d",n,count);
	return 0;
}
