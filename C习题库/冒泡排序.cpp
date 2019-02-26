#include <stdio.h>
int main(void)
{
	int i,t,j,change=1;
	int array[10];
	for(i=0;i<10;i++)
	{
		scanf("%d\t",&array[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%-2d\t",array[i]);
	}
	printf("\n");
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
	for(i=0;i<10;i++)
	{
		printf("%-2d\t",array[i]);
	}
	printf("\n");
	return 0;
}
