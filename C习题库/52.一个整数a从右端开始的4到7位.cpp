//��Ŀ��ȡһ������a���Ҷ˿�ʼ�� 4~7λ.
#include <stdio.h>
int main(void)
{
	int num,a;
	printf("������num:\n");
	scanf("%d",&num);
	a=num%10000000/1000;
	printf("%d���Ҷ˿�ʼ��4~7λ��%04d",num,a);//%04d��ȱλ��0(������û�и���λ���ϵ����֣���0����) 
	return 0;
} 
