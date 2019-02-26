//题目：计算字符串长度.
#include <stdio.h>
#include <string.h>
int main(void)
{
	int leng;
	char str[20];
	printf("请输入字符串:\n");
	gets(str);//输入字符串 
	leng=strlen(str);//计算字符串长度 
	printf("%s的长度为:%d",str,leng);
	return 0;
} 
