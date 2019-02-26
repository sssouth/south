//题目：输入数组,最大的与第一个元素交换,最小的与最后一个元素交换,输出数组.
#include <stdio.h>
int main(void)
{
	int A[10];
	int i,t,min,max,M,N;
	int *B=A;//指针变量 
	for(i=0;i<10;i++)//输入数组 
	{
		printf("请输入数字:\n");
		scanf("%d",&B[i]);
	}
	printf("请输出数组:\n");
	for(i=0;i<10;i++)//输出数组 
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
	min=A[9];max=A[0];//令最大值为A[0],最小值为A[9] 
	M=9;N=0;
	for(i=0;i<10;i++)//找出最大最小值 ，并令min,max分别为最大最小值 
	{
		if(A[i]<min)
		{
			min=A[i];
			M=i;
		}
		if(A[i]>max)
		{
			max=A[i];
			N=i;
		}
	}
	if(M!=9)//检验是否替换过最大最小值 
	{
		t=A[9];
		A[9]=A[M];
		A[M]=t;
	}
	if(N!=0)
	{
		t=A[0];
		A[0]=A[N];
		A[N]=t; 
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",A[i]);
	}
	return 0;
}
