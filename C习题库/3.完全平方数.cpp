//һ������,������100����һ����ȫƽ����,�ټ���168����һ����ȫƽ����,���ʸ����Ƕ��٣�

#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,i=-100;//i��ʾ������,i����СֵΪ-100 
	while(1)
	{
		a=sqrt(100+i);//��ƽ���� 
		b=sqrt(100+i+168);
		if((int)a==a && (int)b==b)//����a,b�Ƿ�Ϊ����,����,��iΪ����,����ѭ�� 
		{
			printf("�����Ϊ:%d",i);
			break;
		}
	}
	return 0;
}
