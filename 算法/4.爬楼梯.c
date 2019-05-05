#include <stdio.h>
int count(int n)
{
	if(n == 1)
		return 1;
	if(n == 2)
		return 2;
	return count(n-1) + count(n-2);//要么最后一次爬一阶台阶(之前爬了n-1阶台阶)，要么爬两阶台阶(之前爬了n-2阶台阶) 
} 
int main(void)
{
	int n;
	printf("请输入你想要爬的楼梯数:");
	scanf("%d",&n);
	printf("爬%d阶楼梯可以有%d种方法!",n,count(n));
} 
