//��Ŀ��һ��5λ��,�ж����ǲ��ǻ�����.��12321�ǻ�����,��λ����λ��ͬ,ʮλ��ǧλ��ͬ.
#include <stdio.h>
int main(void)
{
	int num,a,b,c,d,e;
	printf("������һ��5λ����:");
	scanf("%d",&num);
	a=num/10000;//�������,ʮ,��,ǧ,��λ 
	b=num%10000/1000;
	c=num%1000/100;
	d=num%100/10;
	e=num%10;
	if(a==e && b==d)
		printf("%d�ǻ�����\n",num);
	else
		printf("%d���ǻ�����\n",num);
	return 0;
}
