#include <stdio.h>
int count(int n)
{
	if(n == 1)
		return 1;
	if(n == 2)
		return 2;
	return count(n-1) + count(n-2);//Ҫô���һ����һ��̨��(֮ǰ����n-1��̨��)��Ҫô������̨��(֮ǰ����n-2��̨��) 
} 
int main(void)
{
	int n;
	printf("����������Ҫ����¥����:");
	scanf("%d",&n);
	printf("��%d��¥�ݿ�����%d�ַ���!",n,count(n));
} 
