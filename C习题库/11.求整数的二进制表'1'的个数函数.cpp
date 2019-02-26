//编写一个函数,输入是一个无符号整数,返回其二进制表达式中数字位数为'1'的个数(也被称为汉明重量)
#include <stdio.h>
int count(int a);//声明函数 
int COUNT(int a)//函数功能是计算一个数的二进'1'的个数,并返回结果 
{
	int yushu,count;
	while(1)
	{
		yushu=a%2;
		a=a/2;
		if(yushu==1)
			count+=1;
		if(a<2)
		{
			count+=1;
			break;
		}
	}
	return count;
}
int main(void)
{
	int num;
	printf("请输入一个整数:");
	scanf("%d",&num);
	printf("%d它的二进制中'1'的个数为%d",num,COUNT(num));
	return 0;
}
