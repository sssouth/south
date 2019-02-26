//输入三个整数x,y,z,请把这三个数由小到大输出. 
#include <stdio.h>
int main(void)
{
	int x,y,z,t;
	printf("please input x,y,z:");
	scanf("%d,%d,%d",&x,&y,&z);
	if(x>y)//若x大于y,则交换 
	{
		t=x;
		x=y;
		y=t;
	}
	if(x>z)//若x大于z,则交换  
	{
		t=x;
		x=z;
		z=t;
	}
	if(y>z)//若y大于z,则交换  
	{
		t=y;
		y=z;
		z=t;
	}
	printf("从小到大排序；%d,%d,%d",x,y,z);
	return 0;
}
