//题目：编写一个函数,输入n为偶数时,调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数求1/1+1/3+...+1/n
#include <stdio.h>
float SUM(int a);
float SUM(int a)
{
	float i,sum=0.0;
	if(a%2==0)//a为偶数 
	{
		for(i=2.0;i<=a;i+=2)
		{
			sum=sum+1/i;
		}
	}
	else//a为奇数 
	{
		for(i=1.0;i<=a;i+=2)
		{
			sum=sum+1/i;
		}
	}
	return sum;
}
int main(void) 
{
	int n;
	printf("请输入n:\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("1/2+1/4+...+1/n=%.2f",SUM(n));
	}
	else
	{
		printf("1/1+1/3+...+1/n=%.2f",SUM(n));
	}
	return 0;
}
