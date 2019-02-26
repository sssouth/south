//题目：两个 3行 3列的矩阵,实现其对应位置的数据相加,并返回一个新矩阵.
#include <stdio.h>
int main(void)
{
	int A[3][3]={12,3,45,6,23,15,17,8,29};
	int B[3][3]={1,45,6,9,10,45,61,89,52};
	int C[3][3];
	int i,j;
	//添加数组C的元素 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("数组A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("数组B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
	printf("数组C:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
