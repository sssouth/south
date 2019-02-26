//题目：取一个整数a从右端开始的 4~7位.
#include <stdio.h>
int main(void)
{
	int num,a;
	printf("请输入num:\n");
	scanf("%d",&num);
	a=num%10000000/1000;
	printf("%d从右端开始的4~7位是%04d",num,a);//%04d即缺位补0(若数字没有更高位置上的数字，用0代替) 
	return 0;
} 
