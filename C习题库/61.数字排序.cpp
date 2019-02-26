//题目：输入3个数a,b,c，按大小顺序输出.
#include <stdio.h>
int main(void)
{
	int a,b,c,t;
	printf("请输入a:\n");
	scanf("%d",&a);
	printf("请输入b:\n");
	scanf("%d",&b);
	printf("请输入c:\n");
	scanf("%d",&c);
	printf("排序前的数字:%d,%d,%d\n",a,b,c);
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
	printf("排顺序后的数字:%d<%d<%d",a,b,c);
	return 0;
} 
