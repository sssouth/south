//题目：读取7个数（1-50）的整数值,每读取一个值,程序打印出该值个数的＊. 
#include <stdio.h>
int main(void)
{
	int i=0,j,num;
	while(1)
	{
		printf("请输入一个数(1-50):\n");
		scanf("%d",&num);
		i++;//i表示输入7个数 
		for(j=1;j<=num;j++)//j用于控制输出* 
		{
			printf("*");
		}
		printf("\n");
		if(i==7)
			break;
	}
	return 0;
}
