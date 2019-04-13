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
		printf("\n\n第四步：(第二次称重)A组硬币的重量等于B组，故假币在C组;");
		printf("\n\n第五步：(第三次称重)将C组的两枚硬币经行称重比较，便可得出假币的位置;");
		if(data[6+num]>data[7+num])
		{
			printf("\n\n假币是第%d个",7+num);
		} 	
		else
		{
			printf("\n\n假币是第%d个",6+num);
		}
	}
	else if(sum1<sum2)
	{
		printf("\n\n第四步：(第二次称重)A组硬币的重量小于B组，故假币在A组;");
		printf("\n\n第五步；(第三次称重)将A组的任意两枚硬币经行称重比较，便可得出假币的位置;");
		if(data[0+num]==data[1+num])
			printf("\n\n假币是第%d个",2+num);
		else if(data[0+num]>data[1+num])
			printf("\n\n假币是第%d个",1+num);
		else
			printf("\n\n假币是第%d个",0+num); 
	}
	else
	{
		printf("\n\n第四步；(第二次称重)B组硬币的重量小于A组，故假币在第B组;");
		printf("\n\n第五步；(第三次称重)将B组的任意两枚硬币经行称重比较，便可得出假币的位置;");
		if(data[3+num]==data[4+num])
			printf("\n\n假币是第%d个",5+num);
		else if(data[3+num]>data[4+num])
			printf("\n\n假币是第%d个",4+num);
		else
			printf("\n\n假币是第%d个",3+num);
	}
}
int main(void)
{
	int i,j,place,sum1=0,sum2=0;
	int coin[16]={2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
	printf("请输入你想让假币存在的位置:");
	scanf("%d",&place); 
	coin[place%16]=FALSE;
	printf("\n开始寻找假币!");
	printf("\n\n第一步；将硬币分为两组（每组8个硬币），第一组为数组元素0-7，第二组为数组元素8-15;");
	for(i=0;i<8;i++)
	{
		sum1+=coin[i];
		sum2+=coin[i+8];
	}
	if(sum1<sum2)
	{
		printf("\n\n第二步；(第一次称重)第一组的硬币的重量小于第二组，故假币在第一组;");
		printf("\n\n第三步；在第一组继续寻找假币的具体位置，将假币所在的组继续分为三组(按3,3,2分成A组,B组,C组);");
		Judge(coin,0);
	}
	else
	{
		printf("\n\n第二步；(第一次称重)第二组的硬币的重量小于第一组，故假币在第二组;");
		printf("\n\n第三步；在第二组继续寻找假币的具体位置，将假币所在的组继续分为三组(按3,3,2分成A组,B组,C组);");
		Judge(coin,8);
	}
	printf("\n\n共称量三次！");
	return 0;
}
