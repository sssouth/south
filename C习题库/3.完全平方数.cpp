//一个整数,它加上100后是一个完全平方数,再加上168又是一个完全平方数,请问该数是多少？

#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,i=-100;//i表示所求数,i的最小值为-100 
	while(1)
	{
		a=sqrt(100+i);//开平方数 
		b=sqrt(100+i+168);
		if((int)a==a && (int)b==b)//检验a,b是否为整数,若是,则i为所求,结束循环 
		{
			printf("这个数为:%d",i);
			break;
		}
	}
	return 0;
}
