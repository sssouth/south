//题目：循环输出列表
#include <stdio.h>
int main(void)
{
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	printf("输出数组:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",A[i]);
	}
	return 0;
}
