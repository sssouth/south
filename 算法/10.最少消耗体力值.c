#include <stdio.h>
#define N 20
int Cost(int A[],int start,int n);

int main(void)
{
	int i,n,sum1,sum2;
	int cost[N];
	printf("请输入台阶的阶数："); 
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&cost[i]);
	sum1=Cost(cost,0,n);
	sum2=Cost(cost,1,n);
	if(sum1>sum2)	sum1=sum2;
	printf("\n最少消耗体力值：%d\n",sum1);
}

int Cost(int A[],int start,int n)//第一个参数为体力消耗值数组，第二个参数为第一次爬的台阶阶数，第三个参数为台阶个数 
{
	int i=start+1,sum=A[start];	//sum 用于记录体力消耗值 
	if(n==1)	//	如果台阶个数为 1，直接返回 0 
		return 0; 
	while(i+2<=n)
	{
		if(n-i<3)	//若台阶个数小于 3 个，比较后，结束循环 
		{
			if(A[i]<A[i+1])
				sum+=A[i];
			else
				sum+=A[i+1];
			break;
		}		//若台阶数大于 3 个，因为每次爬台阶只能爬 1 阶或 2 阶，所以可以将台阶 3 个分为一组，
		else	//比较第一和三个台阶共消耗的体力值与第二个的体力值的大小关系，
		{		//若第一和三个台阶共消耗的体力值比第二个的体力值小，则爬第一和三个台阶，
				//否则，爬第二个台阶，继续将后面的台阶 3 个分为一组
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
