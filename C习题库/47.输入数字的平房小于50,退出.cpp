//��Ŀ�����������ֵ�ƽ��,���ƽ�������С�� 50 ���˳�. 
#include <stdio.h>
int main(void)
{
	int num,flag=1;
	while(flag)
	{
		printf("����������num:\n");
		scanf("%d",&num);
		if(num*num<50)
			break;
	}
	return 0; 
}
