#include <stdio.h>
#define FALSE 1
void Judge(int data[],int num);

void Judge(int data[],int num)
{
	int i,j,sum1=0,sum2=0;
	for(i=0;i<3;i++)
	{
		sum1+=data[i+num];
		sum2+=data[i+num+3];
	}
	if(sum1==sum2) 
	{
		printf("\n\n���Ĳ���(�ڶ��γ���)A��Ӳ�ҵ���������B�飬�ʼٱ���C��;");
		printf("\n\n���岽��(�����γ���)��C�����öӲ�Ҿ��г��رȽϣ���ɵó��ٱҵ�λ��;");
		if(data[6+num]>data[7+num])
		{
			printf("\n\n�ٱ��ǵ�%d��",7+num);
		} 	
		else
		{
			printf("\n\n�ٱ��ǵ�%d��",6+num);
		}
	}
	else if(sum1<sum2)
	{
		printf("\n\n���Ĳ���(�ڶ��γ���)A��Ӳ�ҵ�����С��B�飬�ʼٱ���A��;");
		printf("\n\n���岽��(�����γ���)��A���������öӲ�Ҿ��г��رȽϣ���ɵó��ٱҵ�λ��;");
		if(data[0+num]==data[1+num])
			printf("\n\n�ٱ��ǵ�%d��",2+num);
		else if(data[0+num]>data[1+num])
			printf("\n\n�ٱ��ǵ�%d��",1+num);
		else
			printf("\n\n�ٱ��ǵ�%d��",0+num); 
	}
	else
	{
		printf("\n\n���Ĳ���(�ڶ��γ���)B��Ӳ�ҵ�����С��A�飬�ʼٱ��ڵ�B��;");
		printf("\n\n���岽��(�����γ���)��B���������öӲ�Ҿ��г��رȽϣ���ɵó��ٱҵ�λ��;");
		if(data[3+num]==data[4+num])
			printf("\n\n�ٱ��ǵ�%d��",5+num);
		else if(data[3+num]>data[4+num])
			printf("\n\n�ٱ��ǵ�%d��",4+num);
		else
			printf("\n\n�ٱ��ǵ�%d��",3+num);
	}
}
int main(void)
{
	int i,j,place,sum1=0,sum2=0;
	int coin[16]={2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
	printf("�����������üٱҴ��ڵ�λ��:");
	scanf("%d",&place); 
	coin[place%16]=FALSE;
	printf("\n��ʼѰ�Ҽٱ�!");
	printf("\n\n��һ������Ӳ�ҷ�Ϊ���飨ÿ��8��Ӳ�ң�����һ��Ϊ����Ԫ��0-7���ڶ���Ϊ����Ԫ��8-15;");
	for(i=0;i<8;i++)
	{
		sum1+=coin[i];
		sum2+=coin[i+8];
	}
	if(sum1<sum2)
	{
		printf("\n\n�ڶ�����(��һ�γ���)��һ���Ӳ�ҵ�����С�ڵڶ��飬�ʼٱ��ڵ�һ��;");
		printf("\n\n���������ڵ�һ�����Ѱ�Ҽٱҵľ���λ�ã����ٱ����ڵ��������Ϊ����(��3,3,2�ֳ�A��,B��,C��);");
		Judge(coin,0);
	}
	else
	{
		printf("\n\n�ڶ�����(��һ�γ���)�ڶ����Ӳ�ҵ�����С�ڵ�һ�飬�ʼٱ��ڵڶ���;");
		printf("\n\n���������ڵڶ������Ѱ�Ҽٱҵľ���λ�ã����ٱ����ڵ��������Ϊ����(��3,3,2�ֳ�A��,B��,C��);");
		Judge(coin,8);
	}
	printf("\n\n���������Σ�");
	return 0;
}
