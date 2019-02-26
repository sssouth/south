//题目：从键盘输入一个字符串,将小写字母全部转换成大写字母,然后输出到一个磁盘文件"test"中保存.
#include <stdio.h>
#include <string.h> 
int main(void)
{
	FILE *fp;//文件指针 
	char str[20];
	printf("请输入一个字符串:\n");
	gets(str);//输入字符串 
	strupr(str);//将字符串小写转换为大写 
	fp=fopen("text.txt","w");//打开文件 
	fputs(str,fp);//将字符串输入文件 
	fclose(fp);//关闭文件 
	return 0;
}
