//��Ŀ����0-7������ɵ���������
#include <stdio.h>
int main(void)
{
	int i,num=4,sum=4;//sum��ʾ������������num��ʾ��ͬλ������������ 
	for(i=2;i<=8;i++)
	{
		if(i==2)
		{
			num=num*7;
		}
		else
		{
			num=num*8;
		}
		sum=sum+num;
	}
	printf("0-7������ɵ���������Ϊ%d",sum);
	return 0;
}
