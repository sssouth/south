//题目：计算2的20次方.不允许用**和pow()
#include <stdio.h>
int main(void)
{
	int i,sum=1;
	for(i=1;i<=20;i++)
	{
		sum=sum*2;
	}
	printf("2的20次方为%d",sum);
	return 0;
}
