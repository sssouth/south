//��Ŀ�����ָ����ʽ������. 
#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t lt;//����ʱ������ 
	struct tm *p;
	char TIME[30];
	lt=time(NULL);//��ȡ����ʱ�� 
	p=localtime(&lt);//���ʱ������� 
	strftime(TIME,30,"%Y-%m-%d %H:%M:%S",p);//�Զ���ʱ���ʽ 
	printf(TIME);
	return 0;
}
