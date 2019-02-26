//题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数.
#include <stdio.h>
int main(void)
{
	int m,i,t,j;
	int A[10]={12,3,41,5,9,27,81,34,50,61};
	printf("请输入m:\n");
	scanf("%d",&m);
	printf("输出数组:\n");
	for(i=0;i<10;i++)//输出原数组，与改变后的对照 
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
	m=m%10;//减少循环 
	for(i=1;i<=m;i++)
	{
		t=A[9];//将原A[9]的数据保存 
		for(j=9;j>0;j--)
		{
			A[j]=A[j-1];//交换数据 
		}
		A[0]=t;//令A[0]为原A[9],一轮交换完成 
	}
	printf("输出数组:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",A[i]);
	}
	return 0; 
}
