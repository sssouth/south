//题目：求100之内的素数
#include <stdio.h>
int main(void)
{
	int i,j,flag,count=0;
	printf("1-100的素数:\n");
	for(i=2;i<=100;i++)
	{
		flag=1;//flag用来标记是否为素数 
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1) 
		{
			printf("%d\t",i);
			count++;
		}
		if(count==5)//count用来分行,5个为一行 
		{
			printf("\n");
			count=0;
		}
	}
	return 0;
}
