//题目:判断101-200之间有多少个素数,并输出所有素数.
#include <stdio.h>
int main(void)
{
	int i,j,flag=1,count=0,sum=0;
	printf("101-200之间的素数:\n");
	for(i=101;i<=200;i++)
	{
		flag=1;//flag作为是否为素数的标记 
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
			count+=1;
			sum+=1;//sum表示素数个数 
		}
		if(count==5)//5个换一行 
		{			
			printf("\n");
			count=0;
		}
	}
	printf("101-200之间的素数有%d个",sum);
	return 0;
} 
