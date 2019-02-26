//题目：按相反的顺序输出数组的值.
#include <stdio.h>
int main(void)
{
	int A[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	printf("请输出数组:\t");
	for(i=9;i>=0;i--)
	{
		printf("%d\t",A[i]);
	}
	return 0;
} 
