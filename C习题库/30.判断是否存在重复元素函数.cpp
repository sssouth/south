//30��Ŀ������һ����������,�ж��Ƿ�����ظ�Ԫ��.����κ�ֵ�������г�����������,�������� true.���������ÿ��Ԫ�ض�����ͬ,�򷵻� false.
#include <stdio.h>
int judge(int A[],int n);
int judge(int A[],int n)
{
	int i,j,flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[i]==A[j])//�ж��Ƿ�����ͬԪ�� 
				flag=1;
		}
	}
	if(flag==1)
		return 1;
	else
		return 0;
}
int main(void)
{
	int a[10];
	int i;
	printf("����������Ԫ��:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	if(judge(a,10))
		printf("true");
	else
		printf("false");
	return 0;
}
