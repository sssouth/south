//题目：求0-7所能组成的奇数个数
#include <stdio.h>
int main(void)
{
	int i,num=4,sum=4;//sum表示总奇数个数，num表示不同位数的奇数个数 
	for(i=2;i<=8;i++)
	{
		if(i==2)
		{
			num=num*7;
		}
		else
		{
			num=num*8;
		}
		sum=sum+num;
	}
	printf("0-7所能组成的奇数个数为%d",sum);
	return 0;
}
