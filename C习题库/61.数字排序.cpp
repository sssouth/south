//��Ŀ������3����a,b,c������С˳�����.
#include <stdio.h>
int main(void)
{
	int a,b,c,t;
	printf("������a:\n");
	scanf("%d",&a);
	printf("������b:\n");
	scanf("%d",&b);
	printf("������c:\n");
	scanf("%d",&c);
	printf("����ǰ������:%d,%d,%d\n",a,b,c);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	printf("��˳��������:%d<%d<%d",a,b,c);
	return 0;
} 
