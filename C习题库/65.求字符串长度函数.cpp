//��Ŀ��дһ������,��һ���ַ����ĳ���,��main�����������ַ���,������䳤��.
#include <stdio.h>
#include <string.h>
int leng(char A[]);
int leng(char A[])//��������Ϊ�������� 
{
	int L;
	L=strlen(A);
	return L;
}
int main(void)
{
	char str[20];
	printf("�������ַ���:\n");
	gets(str);//�����ַ��� 
	printf("%s�ĳ���Ϊ%d",str,leng(str));
	return 0;
}
