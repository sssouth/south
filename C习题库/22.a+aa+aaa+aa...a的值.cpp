//��Ŀ:��s=a+aa+aaa+aa...a��ֵ,����a��һ������.����2+22+222+2222+22222(��ʱ����5�������),����������ɼ��̿���.
#include <stdio.h>
int main(void)
{
	int n,i,num,a=2,p=1,sum=0;
	printf("������n:");
	scanf("%d",&n);
	num=2;
	for(i=1;i<=n;i++)
	{
		sum=sum+num;
		p=p*10;
		num=num+a*p;//num��ʾaaa 
	}
	printf("a+aa+aaa+aaaa+aa...a=%d",sum);
	return 0;
}
