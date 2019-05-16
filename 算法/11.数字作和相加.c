/*给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数
示例:
输入: 38
输出: 2 
解释: 各位相加的过程为：3 + 8 = 11, 1 + 1 = 2，由于 2 是一位数，所以返回 2 */ 
#include <stdio.h>
int fun(int num);
int main(void)
{
	int num;
	scanf("%d",&num);
	printf("%d\n",fun(num));
}
int fun(int num)
{
	int end,sum=0;
	while(num)
	{
		end=num%10;	//end代表个位上的数 
		sum+=end;
		num/=10;
	}
	if(sum<10)
		return sum;
	else
		return fun(sum);
}
