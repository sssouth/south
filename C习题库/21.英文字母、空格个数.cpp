//��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
	int i,al=0,sp=0,di=0,oth=0;
	char str[20];
	printf("�������ַ���:\n");
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
	printf("%s��%d����ĸ,%d���ո�,%d������,%d������",str,al,sp,di,oth);
	return 0;
}
