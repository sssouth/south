#include <stdio.h>
#define N 50
void search(int data[],int count,int start);//将硬币分三组进行比较 
void search(int data[],int count,int start)//count表示判断的硬币个数，start表示这组硬币的起始位置 
{
	int a,b,i;
	double sum1=0,sum2=0;
	a=count/3;
	b=count%3;
	if(count==1)//硬币个数为1，直接判断 
	{
		printf("\n假币是第%d个.",start);return;
	}
	if(count==2)//硬币个数为2，判断一次 
	{
		if(data[start]>data[start+1])
		{
			printf("\n假币是第%d个.",start+1);return;
		}
		else
		{
			printf("\n假币是第%d个.",start);return;
		}
	}
	if(count==3)//硬币个数为3，判断一次 
	{
		if(data[start]==data[start+1])
		{
			printf("\n假币是第%d个.",start+2);return;
		}
		else if(data[start]<data[start+1])
		{
			printf("\n假币是第%d个.",start);return;
		}
		else
		{
			printf("\n假币是第%d个.",start+1);return;
		}
	}
	if(b==0)//余数为 0，任取两组硬币进行比较(此处选取第一，二组进行比较) 
	{
		for(i=0;i<a;i++)
		{
			sum1+=data[start+i];
			sum2+=data[start+i+a];
		}
		if(sum1==sum2)//sum1与sum2相等，故假币在第三组，调用search()继续进行判断 
		{
			search(data,a,start+2*a);return;
		}
		else if(sum1<sum2)//sum1<sum2，故假币在第一组，调用search()继续进行判断  
		{
			search(data,a,start);return;
		}
		else//sum1>sum2，假币在第二组，调用search()继续进行判断  
		{
			search(data,a,start+a);return;
		}
	}
	if(b==1)//b表示硬币个数除以 3的余数，若 b为 1，则将余数 1加到第一组，保证第二组和第三组的硬币个数相同
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
	if(b==2)//b表示硬币个数除以 3的余数,若 b为 2,则将余数 2分成1+1,分别加到第一,二组,保证第一组和第二组的硬币个数相同
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
	printf("请输入你想让假币所在的位置:");
	scanf("%d",&place);
	coin[place%N]=-1;//假币为-1 
	search(coin,N,0);//调用search函数 
	return 0;
}
