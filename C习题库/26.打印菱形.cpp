//¥Ú”°¡‚–Œ
#include <stdio.h>
int main(void)
{
	int a,b,c;
	for(a=1;a<=7;a++)
	{
		if(a<=4)
		{
			for(b=1;b<=4-a;b++)
				printf(" ");
			for(c=1;c<=2*a-1;c++)
				printf("*");
			printf("\n");
		}
		else
		{
			for(b=1;b<=a-4;b++)
				printf(" ");
			for(c=1;c<=(8-a)*2-1;c++)
				printf("*");
			printf("\n");
		}
	}
	return 0;
} 
