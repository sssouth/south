//��Ŀ�����ֱȽ�.
#include <stdio.h>
int main(void)
{
	int x,y,A;
	printf("������x:\n");
	scanf("%d",&x);
	printf("������y:\n");
	scanf("%d",&y);
	A=x>=y?x:y;//�������ʽ 
	printf("�����������:%d",A);
	return 0;
}
