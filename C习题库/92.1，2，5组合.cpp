//题目：如何组合1、2、5这三个数使其和为100.
#include <stdio.h>
int main(void)
{
	int x,y,z,count=0;//x,y,z代表1，2，5的个数 
	printf("所有可能情况:\n");
	for(z=0;z<=20;z++)//x+2*y+5*z=100,即x+5*z为偶数 
	{
		for(y=100-5*z;y>=0;y-=2)
		{
			if(2*y+5*z<=100)
			{
				x=100-2*y-5*z;
				printf("1*%d+2*%d+5*%d=100\t",x,y,z);
				count+=1;
				if(count==5)//5个为一行输出 
				{
					printf("\n");
					count=0;
				}
			}	
		}
	}
	return 0;
}
