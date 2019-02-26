//输入某年某月某日,判断这一天是这一年的第几天？
#include <stdio.h>
int main(void)
{
	int M[12]={31,28,31,30,31,30,31,31,30,31,30,31};//将平年中每月的天数存放在数组中 
	int i,year,month,day,DAY=0;
	printf("请输入x年x月x日:");
	scanf("%d,%d,%d",&year,&month,&day);
	for(i=0;i<month-1;i++)//循环计算天数 
	{
		DAY=DAY+M[i];
	}
	DAY=DAY+day;
	if((year%4==0 && year%100!=0 || year%400==0) && month>2)//当年份是闰年,且月份大于2月,天数加1 
		DAY+=1;
	printf("%d年%2d月%2d日是这一年的第%d天",year,month,day,DAY);
	return 0;
}
