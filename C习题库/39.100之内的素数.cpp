//��Ŀ����100֮�ڵ�����
#include <stdio.h>
int main(void)
{
	int i,j,flag,count=0;
	printf("1-100������:\n");
	for(i=2;i<=100;i++)
	{
		flag=1;//flag��������Ƿ�Ϊ���� 
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
		if(count==5)//count��������,5��Ϊһ�� 
		{
			printf("\n");
			count=0;
		}
	}
	return 0;
}
