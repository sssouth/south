//题目:一球从100米高度自由落下,每次落地后反跳回原高度的一半,再落下.求它在第10次落地时,共经过多少米？第10次反弹多高？
#include <stdio.h>
int main(void)
{
	float h=100,sum=100;
	int i;
	for(i=1;i<10;i++)
	{
		h=h/2;//球离地面的高度 
		sum=sum+2*h;//球共经过的长度	
	}
	h=h/2;
	printf("球在第10次落地时,共经过%.2f米,第10次反弹%.2f米",sum,h);
	return 0;
} 
