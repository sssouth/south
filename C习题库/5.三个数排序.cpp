//������������x,y,z,�������������С�������. 
#include <stdio.h>
int main(void)
{
	int x,y,z,t;
	printf("please input x,y,z:");
	scanf("%d,%d,%d",&x,&y,&z);
	if(x>y)//��x����y,�򽻻� 
	{
		t=x;
		x=y;
		y=t;
	}
	if(x>z)//��x����z,�򽻻�  
	{
		t=x;
		x=z;
		z=t;
	}
	if(y>z)//��y����z,�򽻻�  
	{
		t=y;
		y=z;
		z=t;
	}
	printf("��С��������%d,%d,%d",x,y,z);
	return 0;
}
