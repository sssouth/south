//쳲���������

#include <stdio.h>
int main(void)
{
	int a=1,b=1,i,num,count;
	printf("������������ĵڼ���:");
	scanf("%d",&count);
	//�ӵ�3�ʼ�������ǰ����֮�� 
	if(count==1 || count==2)
		num=1;
	else
	{
		for(i=1;i<count-1;i++)
		{
			num=a+b;
			b=a;
			a=num;
		}
	}
	printf("��%d�����Ϊ%d",count,num);
	return 0;
}
