//��Ŀ����һ�������������.
#include <stdio.h>
int main(void)
{
	int A[10];
	int i;
	printf("�����������10��Ԫ��:\n");
	for(i=0;i<10;i++)
		scanf("%d",&A[i]);
	printf("�����������:\n");
	for(i=0;i<10;i++)
		printf("%d\t",A[i]);
	printf("\n");
	printf("�����������:\n");
	for(i=9;i>=0;i--)
		printf("%d\t",A[i]);
	printf("\n");
	return 0;
}
