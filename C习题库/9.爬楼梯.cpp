//������������¥��,��Ҫn������ܵ���¥��,ÿ���������1��2��̨��.���ж����ֲ�ͬ�ķ�����������¥���أ�
#include <stdio.h>
int main(void)
{
	int num,may;
	printf("������¥�ݵĽ���:");
	scanf("%d",&num);
	if(num%2==0)//��������۽���������������ż�� 
		may=(num/2)+1;
	else
		may=(num+1)/2;
	printf("%d��̨����%d�ַ���",num,may);
	return 0;
}
