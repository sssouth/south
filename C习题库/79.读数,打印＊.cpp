//��Ŀ����ȡ7������1-50��������ֵ,ÿ��ȡһ��ֵ,�����ӡ����ֵ�����ģ�. 
#include <stdio.h>
int main(void)
{
	int i=0,j,num;
	while(1)
	{
		printf("������һ����(1-50):\n");
		scanf("%d",&num);
		i++;//i��ʾ����7���� 
		for(j=1;j<=num;j++)//j���ڿ������* 
		{
			printf("*");
		}
		printf("\n");
		if(i==7)
			break;
	}
	return 0;
}
