//题目：对10个数进行排序.
#include <stdio.h>
int main(void)
{
	int NUM[10];
	int i,j,t,change=1;
	printf("请输入10个数:\n");
	for(i=0;i<10;i++)
		scanf("%d",&NUM[i]);
	printf("输入的10个数为:\n");
	for(i=0;i<10;i++)
		printf("%d\t",NUM[i]);
	printf("\n");
	for(i=0;i<9 && change==1;i++)//冒泡排序法 
	{
		change=0; 
		for(j=0;j<9-i;j++)
		{
			if(NUM[j]>NUM[j+1])
			{
				t=NUM[j+1];
				NUM[j+1]=NUM[j];
				NUM[j]=t;
				change=1;
			}
		}
	}
	printf("排序后的数为:\n");
	for(i=0;i<10;i++)
		printf("%d\t",NUM[i]);
	return 0;
} 
