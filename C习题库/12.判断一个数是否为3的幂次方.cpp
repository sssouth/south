//����һ������,дһ���������ж����Ƿ���3���ݴη�
#include <stdio.h>
void judge(int a);//�������� 
void judge(int a)//�������� 
{
	int b=a;
	while(1)
	{
		if(a%3==0)//3���ݴη��ض��ܱ�3����,�����ճ���Ϊ1 
		{
			a=a/3;
			if(a==1)
			{
				printf("%d��3���ݴη�\n",b);
				break;
			}
		}
		else if(a==1)//1��3��0���� 
		{
			printf("%d��3���ݴη�\n",b);
			break;
		} 
		else
		{
			printf("%d����3���ݴη�\n",b);
			break;
	    }
	}
} 
int main(void)
{
	int num;
	printf("������һ����:");
	scanf("%d",&num);
	judge(num);//���ú��� 
	return 0;
}
