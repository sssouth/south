//��Ŀ�������������ļ�A��B,�����һ����ĸ,Ҫ����������ļ��е���Ϣ�ϲ�(����ĸ˳������),�����һ�����ļ�C��.
#include <stdio.h>
#include <string.h>
void STR(char S[],int n);
void STR(char S[],int n)//���ַ����������� 
{
	int i,j,change=1;
	char x;
	for(i=0;i<n-1 && change==1;i++)
	{
		change=0;
		for(j=0;j<n-1-i;j++)
		{
			if(S[j]>S[j+1])
			{
				x=S[j+1];
				S[j+1]=S[j];
				S[j]=x;
				change=1;
			}
		}
	}
} 
int main(void)
{
	FILE *fp_a,*fp_b,*fp_c;//�ļ�ָ�� 
	char A[20];//�ַ����� 
	char B[20];
	char str_a[40];
	char str_b[20];
	//���ļ�A�������ַ��� 
	fp_a=fopen("A.txt","w");
	printf("�������ַ���A:\n");
	gets(A);
	fputs(A,fp_a);
	fclose(fp_a);
	//���ļ�B�������ַ��� 
	fp_b=fopen("B.txt","w");
	printf("�������ַ���B:\n");
	gets(B);
	fputs(B,fp_b);
	fclose(fp_b);
	//��A,B�ļ����������������ļ�C�� 
	fp_c=fopen("c.txt","w");
	fp_a=fopen("A.txt","r");
	fp_b=fopen("B.txt","r");
	fgets(str_a,strlen(A)+1,fp_a);
	
	puts(str_a);
	fgets(str_b,strlen(B)+1,fp_b);
	puts(str_b);
	strcat(str_a,str_b);
	STR(str_a,strlen(str_a));
	puts(str_a);
	fputs(str_a,fp_c);
	fclose(fp_c);
	return 0;
}
