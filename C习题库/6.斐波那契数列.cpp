//斐波那契数列

#include <stdio.h>
int main(void)
{
	int a=1,b=1,i,num,count;
	printf("请输入你想求的第几项:");
	scanf("%d",&count);
	//从第3项开始该项等于前两项之和 
	if(count==1 || count==2)
		num=1;
	else
	{
		for(i=1;i<count-1;i++)
		{
			num=a+b;
			b=a;
			a=num;
		}
	}
	printf("第%d项的数为%d",count,num);
	return 0;
}
