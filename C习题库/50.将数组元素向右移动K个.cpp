//题目：给定一个数组,将数组中的元素向右移动 k 个位置,其中 k 是非负数.
#include <stdio.h>
int main (void)
{
	int i,t,j,k;
	int A[10]={12,4,8,34,29,30,45,51,61,90};
	printf("请输入k:\n");//k为移动的个数 
	scanf("%d",&k);
	printf("移动前的数组:\n");//输出未移动的数组 
	for(i=0;i<10;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
	k=k%10;//减少移动的次数 
	for(i=1;i<=k;i++)//开始移动数组，进行K次循环移动，每次移动一个元素 
	{
		t=A[9];
		for(j=9;j>0;j--)
		{
			A[j]=A[j-1];
		}
		A[0]=t;
	}
	printf("移动后的数组:\n");//输出移动后的数组 
	for(i=0;i<10;i++)
	{
		printf("%d\t",A[i]);
	}
	return 0;
}
