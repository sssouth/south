#include <stdio.h>
#define N 20
int Cost(int A[],int n);
int main(void)
{
	int n,i;
	int cost[N];
	printf("������̨������");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&cost[i]);
	printf("������������ֵ��%d\n",Cost(cost,n));
	return 0; 
}
int Cost(int A[],int n)	//��һ��������ʾ���ĵ�����ֵ���ڶ���������ʾ̨�׵ĸ��� 
{
	int i;
	int sum[n];		//����sum[] ��ʾ�����Ӧ̨�׵���С��������ֵ 
	sum[0]=A[0];	//��һ������̨�׵���������ֵ��������ͬ 
	sum[1]=A[1]; 
	for(i=2;i<n;i++)
	{
		if(sum[i-1]<sum[i-2])
			sum[i]=A[i]+sum[i-1];
		else
			sum[i]=A[i]+sum[i-2];
	}
	if(sum[i-1]<sum[i-2])
		return sum[i-1];
	else
		return sum[i-2];
}
