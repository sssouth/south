#include<stdio.h>
 
int main(void)
{
	int a,n;
	printf("请输入数字:\n");
  	scanf("%d",&n);
	printf("%d=",n);
  	for(a=2;a<=n;a++)
  	{
  		if(n%a==0)
  		{
  			n/=a;
  			printf("%d",a);
  			if(n!=1)
  				printf("*");
  			a=1;//使a每次从2开始作除数 
		}
	}
	return 0;
}

