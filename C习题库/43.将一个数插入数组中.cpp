//现输入一个数,要求按原来的规律将它插入数组中.
#include <stdio.h>
int main(void)
{
	int i,num,t;
	int A[10]={1,7,12,17,23,39,51,61,89};
	printf("请输入一个数字:\n");
	scanf("%d",&num);//所添加的数字 
	printf("输出原数组:\n");
	for(i=0;i<9;i++)
		printf("%d\t",A[i]);
	printf("\n");
	for(i=0;i<8;i++)
	{
		if(A[i]<=num && A[i+1]>=num)//寻找数字应添加的位置 
		{
			t=i;
		}
	} 
	for(i=9;i>t;i--)//将数字加入数组 
	{
		A[i]=A[i-1];
	}
	A[t+1]=num;
	printf("输出添加后的数组:\n");
	for(i=0;i<10;i++)
		printf("%d\t",A[i]);
	printf("\n");
	return 0;
}
