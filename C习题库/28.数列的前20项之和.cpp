//��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮��.
#include <stdio.h>
int main(void)
{
	float a=2,b=1,num=0;
	float sum=0;
	int i;
	for(i=1;i<=20;i++)
	{
		sum+=a/b;
		num=a+b;
		b=a;
		a=num;
	}
	printf("2/1��3/2��5/3��8/5��13/8��21/13...������е�ǰ20��֮�� %.2f",sum);
	return 0;
} 
