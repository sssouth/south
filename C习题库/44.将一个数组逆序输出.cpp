//题目：将一个数组逆序输出.
#include <stdio.h>
int main(void)
{
	int A[10];
	int i;
	printf("请输入素组的10个元素:\n");
	for(i=0;i<10;i++)
		scanf("%d",&A[i]);
	printf("正序输出数组:\n");
	for(i=0;i<10;i++)
		printf("%d\t",A[i]);
	printf("\n");
	printf("倒序输出数组:\n");
	for(i=9;i>=0;i--)
		printf("%d\t",A[i]);
	printf("\n");
	return 0;
}
