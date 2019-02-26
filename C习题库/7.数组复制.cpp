//题目：将一个数组的数据复制到另一个数组中.
#include <stdio.h>
int main(void)
{
	int A[10]={12,3,56,14,56,6,66,9,61,10};
	int B[10];
	int i;
	for(i=0;i<10;i++)
	{
		B[i]=A[i];
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",B[i]);
	}
	return 0;
}
