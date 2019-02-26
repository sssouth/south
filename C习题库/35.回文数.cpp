//题目：一个5位数,判断它是不是回文数.即12321是回文数,个位与万位相同,十位与千位相同.
#include <stdio.h>
int main(void)
{
	int num,a,b,c,d,e;
	printf("请输入一个5位数字:");
	scanf("%d",&num);
	a=num/10000;//分离出个,十,百,千,万位 
	b=num%10000/1000;
	c=num%1000/100;
	d=num%100/10;
	e=num%10;
	if(a==e && b==d)
		printf("%d是回文数\n",num);
	else
		printf("%d不是回文数\n",num);
	return 0;
}
