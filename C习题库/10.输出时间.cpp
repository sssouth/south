//10.	��Ŀ����ͣһ�����������ʽ����ǰʱ�䡣
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
