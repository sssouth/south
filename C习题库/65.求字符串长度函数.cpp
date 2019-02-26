//题目：写一个函数,求一个字符串的长度,在main函数中输入字符串,并输出其长度.
#include <stdio.h>
#include <string.h>
int leng(char A[]);
int leng(char A[])//数组名作为函数参数 
{
	int L;
	L=strlen(A);
	return L;
}
int main(void)
{
	char str[20];
	printf("请输入字符串:\n");
	gets(str);//输入字符串 
	printf("%s的长度为%d",str,leng(str));
	return 0;
}
