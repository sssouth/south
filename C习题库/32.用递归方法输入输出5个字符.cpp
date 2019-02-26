//题目：利用递归函数调用方式,将所输入的 5 个字符,以相反顺序打印出来.
#include <stdio.h>
void STR(int n);
void STR(int n)
{
	char A[5];
	if(n==1)
	{
		printf("请输第%d个字符:\n",n);
		scanf("%c",&A[n-1]);
		printf("第%d个字符是%c\n",n,A[n-1]);
	}
	else
	{
		printf("请输入第%d个字符:\n",n);
		scanf("%c",&A[n-1]);
		getchar();
		STR(n-1);
		printf("第%d个字符是%c\n",n,A[n-1]);
	}	
}

int main(void)
{
	STR(5); 
	return 0;
} 
