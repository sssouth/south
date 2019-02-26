//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
	int i,al=0,sp=0,di=0,oth=0;
	char str[20];
	printf("请输入字符串:\n");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(isalpha(str[i]))
			al++;
		else if(isspace(str[i]))
			sp++;
		else if(isdigit(str[i]))
			di++;
		else
			oth++;
	}
	printf("%s有%d个字母,%d个空格,%d个数字,%d个其他",str,al,sp,di,oth);
	return 0;
}
