//题目：求输入数字的平方,如果平方运算后小于 50 则退出. 
#include <stdio.h>
int main(void)
{
	int num,flag=1;
	while(flag)
	{
		printf("请输入数字num:\n");
		scanf("%d",&num);
		if(num*num<50)
			break;
	}
	return 0; 
}
