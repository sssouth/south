#include <stdio.h>
int main(void)
{
	int array[10];
	int i,j,t,count=0,change=1;
	printf("����������:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("δ���е�˳��:\n"); 
	for(i=0;i<10;i++)
	{
		printf("%-2d\t",array[i]);
		count++;
		if(count%5==0)
			printf("\n");
	}
	
	for(i=0;i<9 && change==1;i++)
	{
		change=0;
		for(j=0;j<9-i;j++)
		{
			if(array[j]>array[j+1])
			{
				t=array[j];
				array[j]=array[j+1];
				array[j+1]=t;
				change=1;
			}
		}
	}
	printf("���к��˳��:\n");
	count=0;
	for(i=0;i<10;i++)
	{
		printf("%-2d\t",array[i]);
		count++;
		if(count%5==0)
			printf("\n");
	}
	return 0;
}
