//题目：数字比较.
#include <stdio.h>
int main(void)
{
	int x,y,A;
	printf("请输入x:\n");
	scanf("%d",&x);
	printf("请输入y:\n");
	scanf("%d",&y);
	A=x>=y?x:y;//条件表达式 
	printf("更大的数字是:%d",A);
	return 0;
}
