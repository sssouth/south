//��Ŀ�����������ַ���A �� B,���ַ���A���پ������ٲ��ַ���������ַ���B.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define min(a,b)(a>b?b:a)
int main(void)
{
	char A[10]={"j"};
	char B[10]={"xxynsbzy"};
 
	int D[strlen(B)][strlen(A)];//����������ת������ 
	int i,j;
	for(j=0;j<=strlen(A);j++)
	{
		D[0][j]=j;
	}
	for(i=0;i<=strlen(B);i++)
	{
		D[i][0]=i;
	}
	for(i=1;i<=strlen(B);i++)
	{
		for(j=1;j<=strlen(A);j++)
		{
			D[i][j]=min(min(D[i-1][j]+1,D[i][j-1]+1),(A[j-1]==B[i-1]?D[i-1][j-1]:D[i-1][j-1]+1));
		}
	}
	printf("�ַ���A���پ��� %d ���ַ���������ַ���B\n",D[strlen(B)][strlen(A)]);
	return 0;
}
