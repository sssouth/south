//��Ŀ���ַ�������. 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[20];
	char ch;
	int i,j,change=1;
	printf("������һ���ַ���:\n");
	gets(str);
	printf("ԭ�ַ���:\n");
	puts(str);
	for(i=0;i<strlen(str)-1 && change;i++)//ð������ 
	{
		change=0;
		for(j=0;j<strlen(str)-1-i;j++)
		{
			if(str[j]>str[j+1])
			{
				ch=str[j];
				str[j]=str[j+1];
				str[j+1]=ch;
				change=1;
			}
		}	
	}
	printf("�������ַ���:\n");
	printf("%s",str);
	return 0;
}
