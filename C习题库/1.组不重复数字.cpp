//���ĸ����֣�1��2��3��4����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
#include <stdio.h>
int main(void)
{
	int i,j,k,count=0;//��������.i,j,k������ʾ������ĸ����� 
	printf("1,2,5��ɵ����в��ظ���:\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			for(k=1;k<=4;k++)
			{
				if(i!=j!=k)//ȷ��i,j,k���ظ� 
				{
					printf("%d\t",100*i+10*j+k);
					count++;
					if(count==10)//10��Ϊһ����� 
					{
						printf("\n");
						count=0;
					}
				}
			}
		}
	}
}
