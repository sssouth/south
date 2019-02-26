//题目：两个变量值互换.
#include <stdio.h>
int main(void)
{
	int x,y,t;
	printf("请输入x:\n");
	scanf("%d",&x);
	printf("请输入y:\n");
	scanf("%d",&y);
	printf("改变前的x,y:%d,%d\n",x,y);
	t=x;
	x=y;
	y=t;
	printf("改变后的x,y:%d,%d\n",x,y);
	return 0;
}
