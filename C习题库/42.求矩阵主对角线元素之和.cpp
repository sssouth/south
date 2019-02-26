//题目：求一个3*3矩阵主对角线元素之和.
#include <stdio.h>
int main(void)
{
	int A[3][3];
	int i,j,sum=0;
	printf("请输入3*3矩阵:\n");
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
	printf("3*3矩阵主对角线之和:%d\n",sum);
	return 0;
}
