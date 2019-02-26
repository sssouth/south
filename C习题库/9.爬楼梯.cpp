//假设你正在爬楼梯,需要n阶你才能到达楼顶,每次你可以爬1或2个台阶.你有多少种不同的方法可以爬到楼顶呢？
#include <stdio.h>
int main(void)
{
	int num,may;
	printf("请输入楼梯的阶数:");
	scanf("%d",&num);
	if(num%2==0)//分情况讨论阶梯数是奇数还是偶数 
		may=(num/2)+1;
	else
		may=(num+1)/2;
	printf("%d节台阶有%d种方法",num,may);
	return 0;
}
