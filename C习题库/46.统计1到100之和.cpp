//题目：统计 1 到 100 之和.
#include <stdio.h>
int main(void)
{
	int num,sum=0;
	for(num=1;num<=100;num++)
	{
		sum=sum+num;
	}
	printf("1 到 100 之和为 %d\n",sum);
	return 0;
} 
