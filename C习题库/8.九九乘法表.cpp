//��� 9*9 �˷��ھ���

#include <stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<=9;i++)//�������� 
	{
		for(j=1;j<=i;j++)//ÿ�е����� 
		{
			printf("%d*%d=%-2d\t",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
} 
