//��Ŀ����һ��������5λ��������,Ҫ��1.�����Ǽ�λ��; 2.�����ӡ����λ����.
#include <stdio.h>
int main(void)
{
	int num,i,j,count=0;
	int A[5];
	printf("������һ��������5λ������:");
	scanf("%d",&num);
	i=num;
	while(1)
	{
		
		A[count]=i%10;//��������������洢�������� 
		i=i/10;
		count+=1;//count������λ�� 
		if(i==0)
			break;
	}
	printf("%d��%dλ��\n",num,count);
	printf("���������������:");
	for(j=0;j<count;j++)
		printf("%d\t",A[j]);
	return 0;
}
