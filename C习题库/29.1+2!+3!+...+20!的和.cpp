//��Ŀ����1+2!+3!+...+20!�ĺ�.
#include <stdio.h>
int main(void)
{
	int i,num=1,sum=0;
	for(i=1;i<=20;i++)
	{
		num=num*i;
		sum+=num;
	}
	printf("1+2!+3!+...+20!�ĺ� %d",sum);
	return 0;
}
