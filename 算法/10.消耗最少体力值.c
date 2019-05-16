#include <stdio.h>
#define N 20
int Cost(int A[],int n);
int main(void)
{
	int n,i;
	int cost[N];
	printf("请输入台阶数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&cost[i]);
	printf("最少消耗体力值：%d\n",Cost(cost,n));
	return 0; 
}
int Cost(int A[],int n)	//第一个参数表示消耗的体力值，第二个参数表示台阶的个数 
{
	int i;
	int sum[n];		//数组sum[] 表示到达对应台阶的最小体力消耗值 
	sum[0]=A[0];	//第一、二个台阶的体力消耗值与输入相同 
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
