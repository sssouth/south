//题目：某个公司采用公用电话传递数据,数据是四位的整数,在传递过程中是加密的,加密规则如下：
//每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换.
#include <stdio.h>
int main(void)
{
	int num,a,b,c,d,ch_num,n_num;
	printf("请输入一个四位数字:\n"); 
	scanf("%d",&num);
	printf("加密前的数字是%d\n",num);
	//加密过程
	 a=num/1000;
	 b=num%1000/100;
	 c=num%100/10;
	 d=num%10;
	 a=(a+5)%10;
	 b=(b+5)%10;
	 c=(c+5)%10;
	 d=(d+5)%10;
	 ch_num=1000*d+100*c+10*b+a;
	 printf("加密后的数字是%d\n",ch_num);
	 //解密过程
	 a=ch_num/1000;
	 b=ch_num%1000/100;
	 c=ch_num%100/10;
	 d=ch_num%10;
	 a=(a+5)%10;
	 b=(b+5)%10;
	 c=(c+5)%10;
	 d=(d+5)%10;
	 n_num=1000*d+100*c+10*b+a;
	 printf("解密后的数字是%d\n",n_num);
	 return 0; 
}
