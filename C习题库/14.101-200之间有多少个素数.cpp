//��Ŀ:�ж�101-200֮���ж��ٸ�����,�������������.
#include <stdio.h>
int main(void)
{
	int i,j,flag=1,count=0,sum=0;
	printf("101-200֮�������:\n");
	for(i=101;i<=200;i++)
	{
		flag=1;//flag��Ϊ�Ƿ�Ϊ�����ı�� 
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
			sum+=1;//sum��ʾ�������� 
		}
		if(count==5)//5����һ�� 
		{			
			printf("\n");
			count=0;
		}
	}
	printf("101-200֮���������%d��",sum);
	return 0;
} 
