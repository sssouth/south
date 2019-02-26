//题目:利用递归方法求 5!.
#include <stdio.h>
int digui(int n);
int digui(int n)
{
	if(n==1)
		return 1;
	else
		return n*digui(n-1);//n!=n*(n-1)!
}
int main(void)
{
	int num=5;
	printf("5!=%d",digui(5));
	return 0;
}
