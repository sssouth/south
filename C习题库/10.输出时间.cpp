//10.	题目：暂停一秒输出，并格式化当前时间。
#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t lt;
	struct tm *n;
	lt=time(NULL);
	n=localtime(&lt);
	printf("%s",asctime(n));
	return 0;
} 
