//题目:求s=a+aa+aaa+aa...a的值,其中a是一个数字.例如2+22+222+2222+22222(此时共有5个数相加),几个数相加由键盘控制.
#include <stdio.h>
int main(void)
{
	int n,i,num,a=2,p=1,sum=0;
	printf("请输入n:");
	scanf("%d",&n);
	num=2;
	for(i=1;i<=n;i++)
	{
		sum=sum+num;
		p=p*10;
		num=num+a*p;//num表示aaa 
	}
	printf("a+aa+aaa+aaaa+aa...a=%d",sum);
	return 0;
}
