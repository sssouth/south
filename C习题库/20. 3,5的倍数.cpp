//��Ŀ:дһ������,�����1��n���ֵ��ַ�����ʾ.
//1.���n��3�ı���,���"Fizz"; 2.���n��5�ı���,���"Buzz"; 3.���nͬʱ��3��5�ı���,���"FizzBuzz".
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,i;
	char str[5];
	printf("������һ����:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5!=0)//��֧����ж������� 
			printf("Fizz\n");
		else if(i%5==0 && i%3!=0)
			printf("Buzz\n");
		else if(i%3==0 && i%5==0)
			printf("FizzBuzz");
		else
		{
			itoa(i,str,10);//������ת��Ϊ�ַ��� 
			printf("%s\n",str);
		}
	}
	return 0;	
}
