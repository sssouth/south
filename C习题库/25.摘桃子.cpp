//题目:猴子吃桃问题:猴子第一天摘下若干个桃子,当即吃了一半,还不瘾,又多吃了一个.第二天早上又将剩下的桃子吃掉一半,又多吃了一个.
//以后每天早上都吃了前一天剩下的一半零一个,到第10天早上想再吃时,见只剩下一个桃子了.求第一天共摘了多少?
#include <stdio.h>
int peach(int a);//函数声明 
int peach(int a)//函数定义 
{
	int sum;
	if(a==1)
		return 2*(1+1);
	else
	{
		sum=2*(peach(a-1)+1);//前一天的桃子数等于今天的数加1,再乘以2 
		return sum;
	}
}

int main(void)
{
	int i=9;
	printf("第一天摘了%d个桃子",peach(i));
	return 0; 
}
