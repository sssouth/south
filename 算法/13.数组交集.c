//�����������飬�������ǵĽ��� 
#include <stdio.h>
#define M 7 
#define N 5 

void Create(int A[],int n);
void Union(int A[],int B[]);

main() 
{
	int A[M];
	int B[N];
	Create(A,M);
	Create(B,N);
	Union(A,B);	
}

void Create(int A[],int n)
{
	int i;
	printf("��ʼ��������Ԫ�أ�\n"); 
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
}

void Union(int A[],int B[])
{
	int C[N]={0},flag[100]={0};
	int i,j,k=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(A[j]==B[i])
			{
				if(flag[A[j]]==0)
				{
					C[k]=A[j];
					flag[A[j]]=1;
					k++;
					break;	
				}
				else
					break;
			}
		}
	}
	if(k==0)
		printf("�޹���Ԫ��.");
	else
	{ 
	printf("\n����Ԫ�أ�"); 
	for(i=0;i<k;i++)
		printf("%d\t",C[i]);
	} 
}
