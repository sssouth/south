//��Ŀ�������ַ�������.
#include <stdio.h>
#include <string.h>
int main(void)
{
	int leng;
	char str[20];
	printf("�������ַ���:\n");
	gets(str);//�����ַ��� 
	leng=strlen(str);//�����ַ������� 
	printf("%s�ĳ���Ϊ:%d",str,leng);
	return 0;
} 
