#include <stdio.h>
#define N 20
int Cost(int A[],int start,int n);

int main(void)
{
	int i,n,sum1,sum2;
	int cost[N];
	printf("������̨�׵Ľ�����"); 
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&cost[i]);
	sum1=Cost(cost,0,n);
	sum2=Cost(cost,1,n);
	if(sum1>sum2)	sum1=sum2;
	printf("\n������������ֵ��%d\n",sum1);
}

int Cost(int A[],int start,int n)//��һ������Ϊ��������ֵ���飬�ڶ�������Ϊ��һ������̨�׽���������������Ϊ̨�׸��� 
{
	int i=start+1,sum=A[start];	//sum ���ڼ�¼��������ֵ 
	if(n==1)	//	���̨�׸���Ϊ 1��ֱ�ӷ��� 0 
		return 0; 
	while(i+2<=n)
	{
		if(n-i<3)	//��̨�׸���С�� 3 �����ȽϺ󣬽���ѭ�� 
		{
			if(A[i]<A[i+1])
				sum+=A[i];
			else
				sum+=A[i+1];
			break;
		}		//��̨�������� 3 ������Ϊÿ����̨��ֻ���� 1 �׻� 2 �ף����Կ��Խ�̨�� 3 ����Ϊһ�飬
		else	//�Ƚϵ�һ������̨�׹����ĵ�����ֵ��ڶ���������ֵ�Ĵ�С��ϵ��
		{		//����һ������̨�׹����ĵ�����ֵ�ȵڶ���������ֵС��������һ������̨�ף�
				//�������ڶ���̨�ף������������̨�� 3 ����Ϊһ��
			if((A[i]+A[i+2]) <= A[i+1])
			{ 
				sum=sum+A[i]+A[i+2];
				i+=3;
			}
			else
			{
				sum+=A[i+1];
				i+=2;
			}
		}
	}
	return sum;
}
