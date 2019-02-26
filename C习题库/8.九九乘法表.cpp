//输出 9*9 乘法口诀表

#include <stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<=9;i++)//控制行数 
	{
		for(j=1;j<=i;j++)//每行的内容 
		{
			printf("%d*%d=%-2d\t",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
} 
