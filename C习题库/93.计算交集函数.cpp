//题目：给定两个数组,编写一个函数来计算它们的交集
#include <stdio.h>
void jiao(int a[10],int b[10]);
void jiao(int a[10],int b[10])
{
	int i,j,k=0;
	int C[10]; 
	for(i=0;i<10;i++) 
	{
		for(j=0;j<10;j++)
		{
			if(a[i]==b[j])
			{
				C[k]=a[i];
				k++;
			}
		}
	}
	printf("交集:\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",C[i]);
	}
}
int main(void)
{
	int A[10]={23,2,12,4,67,61,89,90,29,46};
	int B[10]={12,4,99,66,35,67,70,90,29,6};
	jiao(A,B);
	return 0;
}
