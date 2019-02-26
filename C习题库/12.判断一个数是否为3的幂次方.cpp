//给定一个整数,写一个函数来判断它是否是3的幂次方
#include <stdio.h>
void judge(int a);//函数声明 
void judge(int a)//函数定义 
{
	int b=a;
	while(1)
	{
		if(a%3==0)//3的幂次方必定能被3整除,且最终除数为1 
		{
			a=a/3;
			if(a==1)
			{
				printf("%d是3的幂次方\n",b);
				break;
			}
		}
		else if(a==1)//1是3的0次幂 
		{
			printf("%d是3的幂次方\n",b);
			break;
		} 
		else
		{
			printf("%d不是3的幂次方\n",b);
			break;
	    }
	}
} 
int main(void)
{
	int num;
	printf("请输入一个数:");
	scanf("%d",&num);
	judge(num);//调用函数 
	return 0;
}
