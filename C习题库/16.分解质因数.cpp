#include<stdio.h>
 
int main(void)
{
	int a,n;
	printf("����������:\n");
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
  			a=1;//ʹaÿ�δ�2��ʼ������ 
		}
	}
	return 0;
}

