//有四个数字：1、2、3、4能组成多少个互不相同且无重复数字的三位数？各是多少？
#include <stdio.h>
int main(void)
{
	int i,j,k,count=0;//声明变量.i,j,k用来表示组合数的各个数 
	printf("1,2,5组成的所有不重复数:\n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			for(k=1;k<=4;k++)
			{
				if(i!=j!=k)//确保i,j,k不重复 
				{
					printf("%d\t",100*i+10*j+k);
					count++;
					if(count==10)//10个为一行输出 
					{
						printf("\n");
						count=0;
					}
				}
			}
		}
	}
}
