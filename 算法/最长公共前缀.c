/*��дһ�������������ַ��������е������ǰ׺����������ڹ���ǰ׺�����ؿ��ַ��� ""��
��������: ["flower","flow","flight"];		����: ["dog","racecar","car"];
	���: "fl"								���: ""	*/
#include <stdio.h>
#include <string.h>
#define M 3
#define N 20
void Search(char A[][N])
{
	char B[N];
	int i,j,k,min=0,flag=1;
	min=strlen(A[0]);	//min��ʾ�ַ���������̵��ַ������� 
	for(i=1;i<M;i++)
	{
		if(strlen(A[i])<min)
			min=strlen(A[i]);
	}
	for(i=0;i<min;i++)
	{
		j=0;k=1;flag=1;
		while(k<M)
		{
			if(A[j][i]!=A[k][i])//����һ��������ڶ����������Ԫ�ز�һ�£���ֱ�Ӳ����ٽ��бȽϣ�flag��Ϊ��ʶ 
			{
				flag=0;break;
			}
			else	k++;
		}
		if(flag)	
			B[i]=A[0][i];//�����Ԫ�ش����ַ�����B�� 
		else	break;
	}
	B[i]='\0';//ĩβӦ�ֶ������ַ�������־'\0'
	printf("�����ǰ׺��\"%s\"",B); 
}
int main(void)
{
	int i;
	char A[M][N];
	printf("�������ַ�������:\n");
	for(i=0;i<M;i++)	//����N���ַ���(gets()����Ϊ�����������������Ԫ�ص�ַ) 
		gets(A[i]);
	Search(A);
	return 0;
}
