//��Ŀ����һ��3*3�������Խ���Ԫ��֮��.
#include <stdio.h>
int main(void)
{
	int A[3][3];
	int i,j,sum=0;
	printf("������3*3����:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		sum+=A[i][i];
	}
	printf("3*3�������Խ���֮��:%d\n",sum);
	return 0;
}
