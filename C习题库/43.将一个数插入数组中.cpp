//������һ����,Ҫ��ԭ���Ĺ��ɽ�������������.
#include <stdio.h>
int main(void)
{
	int i,num,t;
	int A[10]={1,7,12,17,23,39,51,61,89};
	printf("������һ������:\n");
	scanf("%d",&num);//����ӵ����� 
	printf("���ԭ����:\n");
	for(i=0;i<9;i++)
		printf("%d\t",A[i]);
	printf("\n");
	for(i=0;i<8;i++)
	{
		if(A[i]<=num && A[i+1]>=num)//Ѱ������Ӧ��ӵ�λ�� 
		{
			t=i;
		}
	} 
	for(i=9;i>t;i--)//�����ּ������� 
	{
		A[i]=A[i-1];
	}
	A[t+1]=num;
	printf("�����Ӻ������:\n");
	for(i=0;i<10;i++)
		printf("%d\t",A[i]);
	printf("\n");
	return 0;
}
