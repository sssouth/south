#include <stdio.h>
#define LENGTH 16 
#define FALSE -1
void search(int data[],int start,int end);

void search(int data[],int start,int end)
{
	int i,sum1=0,sum2=0;
	if((end-start)==2)
	{
		//printf("");
		if(data[start]<data[start+1])
		{
			printf("\n\n假币是第%d个.",start);
		}
			
		else
			printf("\n\n假币是第%d个",start+1);
	}
	else
	{
		for(i=start;i<(end+start)/2;i++)
		{
			sum1+=data[i];
			sum2+=data[(end-start)/2+i];
		}
		if(sum1==sum2)
			printf("\n\n假币是第%d个.",end-1);
		else
		{
			if(sum1<sum2)
			{
				end=(end+start)/2;
				search(data,start,end);
			}
			else
			{
				start=(start+end)/2;
				search(data,start,end);
			}
		}
	}	
}
int main(void)
{
	int place;
	int coin[LENGTH]={0};
	printf("输入你想让假币存在的位置:");
	scanf("%d",&place);
	coin[place%LENGTH]=FALSE;
	search(coin,0,LENGTH);
	return 0;
} 
