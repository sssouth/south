/*给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数
示例:
输入: 38
输出: 2 
解释: 各位相加的过程为：3 + 8 = 11, 1 + 1 = 2，由于 2 是一位数，所以返回 2 */ 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int num;
	scanf("%d",&num);
	printf("%d\n",fun(num));
	return 0;
}
int fun(int num)
{
	char A[10];
	int i,sum=0;
	sprintf(A,"%d",num);
	for(i=0;i<strlen(A);i++)
	{
		sum+=A[i]-48;
	}
	if(sum>9)
		fun(sum);
	else
		return sum;
}
