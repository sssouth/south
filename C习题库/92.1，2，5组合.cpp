//��Ŀ��������1��2��5��������ʹ���Ϊ100.
#include <stdio.h>
int main(void)
{
	int x,y,z,count=0;//x,y,z����1��2��5�ĸ��� 
	printf("���п������:\n");
	for(z=0;z<=20;z++)//x+2*y+5*z=100,��x+5*zΪż�� 
	{
		for(y=100-5*z;y>=0;y-=2)
		{
			if(2*y+5*z<=100)
			{
				x=100-2*y-5*z;
				printf("1*%d+2*%d+5*%d=100\t",x,y,z);
				count+=1;
				if(count==5)//5��Ϊһ����� 
				{
					printf("\n");
					count=0;
				}
			}	
		}
	}
	return 0;
}
