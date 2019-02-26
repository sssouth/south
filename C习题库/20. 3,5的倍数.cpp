//题目:写一个程序,输出从1到n数字的字符串表示.
//1.如果n是3的倍数,输出"Fizz"; 2.如果n是5的倍数,输出"Buzz"; 3.如果n同时是3和5的倍数,输出"FizzBuzz".
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,i;
	char str[5];
	printf("请输入一个数:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5!=0)//分支语句判断输出情况 
			printf("Fizz\n");
		else if(i%5==0 && i%3!=0)
			printf("Buzz\n");
		else if(i%3==0 && i%5==0)
			printf("FizzBuzz");
		else
		{
			itoa(i,str,10);//将整数转换为字符串 
			printf("%s\n",str);
		}
	}
	return 0;	
}
