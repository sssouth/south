//题目：给出一个 32 位的有符号整数,你需要将这个整数中每位上的数字进行反转.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	long int num,NUM;
	char str[10];
	char ch;
	int i,leng;
	printf("请输入num:\n");
	scanf("%d",&num);
	printf("颠倒前的数字:%d\n",num);
	itoa(num,str,10);//将数字转换为字符串 
	leng=strlen(str);//求出字符串长度，分奇偶数转换 
	if(leng%2==0)
	{
		for(i=0;i<leng/2;i++)
		{
			ch=str[i];
			str[i]=str[leng-1-i];
			str[leng-1-i]=ch;
		}
	}
	else
	{
		for(i=0;i<(leng-1)/2;i++)
		{
			ch=str[i];
			str[i]=str[leng-1-i];
			str[leng-i-1]=ch;
		}
	}
	NUM=atol(str);//将字符串转换为长整型数字 
	printf("颠倒后的数字:%d\n",NUM);
	return 0;
}
