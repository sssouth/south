#include <stdio.h>
#define N 50
void search(int data[],int count,int start);//��Ӳ�ҷ�������бȽ� 
void search(int data[],int count,int start)//count��ʾ�жϵ�Ӳ�Ҹ�����start��ʾ����Ӳ�ҵ���ʼλ�� 
{
	int a,b,i;
	double sum1=0,sum2=0;
	a=count/3;
	b=count%3;
	if(count==1)//Ӳ�Ҹ���Ϊ1��ֱ���ж� 
	{
		printf("\n�ٱ��ǵ�%d��.",start);return;
	}
	if(count==2)//Ӳ�Ҹ���Ϊ2���ж�һ�� 
	{
		if(data[start]>data[start+1])
		{
			printf("\n�ٱ��ǵ�%d��.",start+1);return;
		}
		else
		{
			printf("\n�ٱ��ǵ�%d��.",start);return;
		}
	}
	if(count==3)//Ӳ�Ҹ���Ϊ3���ж�һ�� 
	{
		if(data[start]==data[start+1])
		{
			printf("\n�ٱ��ǵ�%d��.",start+2);return;
		}
		else if(data[start]<data[start+1])
		{
			printf("\n�ٱ��ǵ�%d��.",start);return;
		}
		else
		{
			printf("\n�ٱ��ǵ�%d��.",start+1);return;
		}
	}
	if(b==0)//����Ϊ 0����ȡ����Ӳ�ҽ��бȽ�(�˴�ѡȡ��һ��������бȽ�) 
	{
		for(i=0;i<a;i++)
		{
			sum1+=data[start+i];
			sum2+=data[start+i+a];
		}
		if(sum1==sum2)//sum1��sum2��ȣ��ʼٱ��ڵ����飬����search()���������ж� 
		{
			search(data,a,start+2*a);return;
		}
		else if(sum1<sum2)//sum1<sum2���ʼٱ��ڵ�һ�飬����search()���������ж�  
		{
			search(data,a,start);return;
		}
		else//sum1>sum2���ٱ��ڵڶ��飬����search()���������ж�  
		{
			search(data,a,start+a);return;
		}
	}
	if(b==1)//b��ʾӲ�Ҹ������� 3���������� bΪ 1�������� 1�ӵ���һ�飬��֤�ڶ���͵������Ӳ�Ҹ�����ͬ
	{
		for(i=a+1;i<2*a+1;i++)
		{
			sum1+=data[start+i];
			sum2+=data[start+i+a];
		}
		if(sum1==sum2)
		{
			search(data,a+1,start);return;
		}
		else if(sum1<sum2)
		{
			search(data,a,start+a+1);return;
		}
		else
		{
			search(data,a,start+2*a+1);return;
		}
	}
	if(b==2)//b��ʾӲ�Ҹ������� 3������,�� bΪ 2,������ 2�ֳ�1+1,�ֱ�ӵ���һ,����,��֤��һ��͵ڶ����Ӳ�Ҹ�����ͬ
	{
		for(i=0;i<=a;i++)
		{
			sum1+=data[start+i];
			sum2+=data[start+i+a+1];
		}
		if(sum1==sum2)
		{
			search(data,a,start+2*a+2);return;
		}
		else if(sum1<sum2)
		{
			search(data,a+1,start);return;
		}
		else
		{
			search(data,a+1,start+a+1);return;
		}
	}	
}
int main(void)
{
	int place;
	int coin[N]={0};
	printf("�����������üٱ����ڵ�λ��:");
	scanf("%d",&place);
	coin[place%N]=-1;//�ٱ�Ϊ-1 
	search(coin,N,0);//����search���� 
	return 0;
}
