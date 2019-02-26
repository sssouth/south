//古典问题:有一对兔子,从出生后第3个月起每个月都生一对兔子,小兔子长到第三个月后每个月又生一对兔子,假如兔子都不死,问每个月的兔子总数为多少?
#include <stdio.h>//兔子数列,即斐波那契额数列 
int main(void)
{
	int month,a=1,b=1,i=3,num;
	printf("请输入你想查询的月份:");
	scanf("%d",&month);
	if(month==1 || month==2)//若月份为1或2,则兔子对数为1 
		num=a;
	else//从第3个月起,当月兔子对w数为前两个月和 
	{
		while(1)
		{
			if(i<=month)
			{
				num=a+b;
				b=a;
				a=num;
			}
			i++;
			if(i>month)
				break;			
		}
	}
	printf("%d个月后有兔子%d只",month,2*num);
	return 0;	
} 
