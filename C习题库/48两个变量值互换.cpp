//��Ŀ����������ֵ����.
#include <stdio.h>
int main(void)
{
	int x,y,t;
	printf("������x:\n");
	scanf("%d",&x);
	printf("������y:\n");
	scanf("%d",&y);
	printf("�ı�ǰ��x,y:%d,%d\n",x,y);
	t=x;
	x=y;
	y=t;
	printf("�ı���x,y:%d,%d\n",x,y);
	return 0;
}
