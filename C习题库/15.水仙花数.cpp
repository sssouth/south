//题目:打印出所有的"水仙花数",所谓"水仙花数"是指一个三位数,其各位数字立方和等于该数本身.
//例如:153是一个"水仙花数",因为153=1的三次方＋5的三次方＋3的三次方.

#include <stdio.h>
int main(void)
{
	int i,a,b,c;
	printf("水仙花数:\n");
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=i%100/10;
		c=i%10;
		if(i==a*a*a+b*b*b+c*c*c)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
