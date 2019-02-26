//题目:一个数如果恰好等于它的因子之和,这个数就称为"完数".例如6=1＋2＋3.编程找出1000以内的所有完数.
#include <stdio.h>
int main(void)
{
	int i,j,sum;
	for(i=2;i<=1000;i++)
	{
		sum=1;
		for(j=2;j<i;j++)//寻找因子 
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)//判断因子相加是否与原数相等 
		{
			printf("%d是一个完数\n",i);
		}
	}
	return 0;
} 
