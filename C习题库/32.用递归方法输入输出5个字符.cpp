//��Ŀ�����õݹ麯�����÷�ʽ,��������� 5 ���ַ�,���෴˳���ӡ����.
#include <stdio.h>
void STR(int n);
void STR(int n)
{
	char A[5];
	if(n==1)
	{
		printf("�����%d���ַ�:\n",n);
		scanf("%c",&A[n-1]);
		printf("��%d���ַ���%c\n",n,A[n-1]);
	}
	else
	{
		printf("�������%d���ַ�:\n",n);
		scanf("%c",&A[n-1]);
		getchar();
		STR(n-1);
		printf("��%d���ַ���%c\n",n,A[n-1]);
	}	
}

int main(void)
{
	STR(5); 
	return 0;
} 
