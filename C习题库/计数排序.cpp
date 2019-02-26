#include <stdio.h>
int main(void)
{
	int n,i=0;
	int j=0;
	int a_array[10];
	int b_array[101];
	for(i=0;i<10;i++)
		scanf("%d",&a_array[i]);
	for(i=0;i<101;i++)
		b_array[i]=0;
	for(i=0;i<101;i++)
		a_array[b_array[i]]++;
	for(i=0;i<101;i++)
		if(b_array[i]!=0)
			n=b_array[i];
			for(j=0;j<n;j++)
				printf("%d  ",b_array[i]);		
}
