//��дһ������,������һ���޷�������,����������Ʊ��ʽ������λ��Ϊ'1'�ĸ���(Ҳ����Ϊ��������)
#include <stdio.h>
int count(int a);//�������� 
int COUNT(int a)//���������Ǽ���һ�����Ķ���'1'�ĸ���,�����ؽ�� 
{
	int yushu,count;
	while(1)
	{
		yushu=a%2;
		a=a/2;
		if(yushu==1)
			count+=1;
		if(a<2)
		{
			count+=1;
			break;
		}
	}
	return count;
}
int main(void)
{
	int num;
	printf("������һ������:");
	scanf("%d",&num);
	printf("%d���Ķ�������'1'�ĸ���Ϊ%d",num,COUNT(num));
	return 0;
}
