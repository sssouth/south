//��Ŀ����������,�������һ��Ԫ�ؽ���,��С�������һ��Ԫ�ؽ���,�������.
#include <stdio.h>
int main(void)
{
	int A[10];
	int i,t,min,max,M,N;
	int *B=A;//ָ����� 
	for(i=0;i<10;i++)//�������� 
	{
		printf("����������:\n");
		scanf("%d",&B[i]);
	}
	printf("���������:\n");
	for(i=0;i<10;i++)//������� 
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
	min=A[9];max=A[0];//�����ֵΪA[0],��СֵΪA[9] 
	M=9;N=0;
	for(i=0;i<10;i++)//�ҳ������Сֵ ������min,max�ֱ�Ϊ�����Сֵ 
	{
		if(A[i]<min)
		{
			min=A[i];
			M=i;
		}
		if(A[i]>max)
		{
			max=A[i];
			N=i;
		}
	}
	if(M!=9)//�����Ƿ��滻�������Сֵ 
	{
		t=A[9];
		A[9]=A[M];
		A[M]=t;
	}
	if(N!=0)
	{
		t=A[0];
		A[0]=A[N];
		A[N]=t; 
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",A[i]);
	}
	return 0;
}
