//��Ŀ���Ӽ�������һ���ַ���,��Сд��ĸȫ��ת���ɴ�д��ĸ,Ȼ�������һ�������ļ�"test"�б���.
#include <stdio.h>
#include <string.h> 
int main(void)
{
	FILE *fp;//�ļ�ָ�� 
	char str[20];
	printf("������һ���ַ���:\n");
	gets(str);//�����ַ��� 
	strupr(str);//���ַ���Сдת��Ϊ��д 
	fp=fopen("text.txt","w");//���ļ� 
	fputs(str,fp);//���ַ��������ļ� 
	fclose(fp);//�ر��ļ� 
	return 0;
}
