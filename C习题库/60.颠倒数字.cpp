//��Ŀ������һ�� 32 λ���з�������,����Ҫ�����������ÿλ�ϵ����ֽ��з�ת.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	long int num,NUM;
	char str[10];
	char ch;
	int i,leng;
	printf("������num:\n");
	scanf("%d",&num);
	printf("�ߵ�ǰ������:%d\n",num);
	itoa(num,str,10);//������ת��Ϊ�ַ��� 
	leng=strlen(str);//����ַ������ȣ�����ż��ת�� 
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
	NUM=atol(str);//���ַ���ת��Ϊ���������� 
	printf("�ߵ��������:%d\n",NUM);
	return 0;
}
