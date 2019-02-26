//题目：输出指定格式的日期. 
#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t lt;//日历时间类型 
	struct tm *p;
	char TIME[30];
	lt=time(NULL);//获取日历时间 
	p=localtime(&lt);//获得时间和日期 
	strftime(TIME,30,"%Y-%m-%d %H:%M:%S",p);//自定义时间格式 
	printf(TIME);
	return 0;
}
