//题目：给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，找出 0 .. n 中没有出现在序列中的那个数.
#include <stdio.h>
int main(void)
{
	int n=20,i,j,flag;
	int A[20]={1,5,8,0,14,2,3,7,17,11,19,4,9,10,16,10,15,13,12,18};
	for(i=0;i<=20;i++)
	{
		flag=0;
		for(j=0;j<20;j++)
		{
			if(i==A[j])
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("%d没有出现在数列中\n",i);
			break;
		}
	}
	return 0;
}
