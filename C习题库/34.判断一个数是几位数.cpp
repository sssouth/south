//题目：给一个不多于5位的正整数,要求：1.求它是几位数; 2.逆序打印出各位数字.
#include <stdio.h>
int main(void)
{
	int num,i,j,count=0;
	int A[5];
	printf("请输入一个不多于5位的整数:");
	scanf("%d",&num);
	i=num;
	while(1)
	{
		
		A[count]=i%10;//将各个数字逆序存储在数组里 
		i=i/10;
		count+=1;//count用来记位数 
		if(i==0)
			break;
	}
	printf("%d是%d位数\n",num,count);
	printf("逆序输出各个数字:");
	for(j=0;j<count;j++)
		printf("%d\t",A[j]);
	return 0;
}
