//��Ŀ��ͳ������С�ڷǸ����� n ������������.
#include <stdio.h>
int main(void)
{
	int n,count=0,flag,i,j;
	printf("������n(�Ǹ�):\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		flag=1;//�ж��Ƿ������� 
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			count+=1;//ͳ�������ĸ��� 
		}
	}
	printf("С�ڷǸ�����%d������������Ϊ%d",n,count);
	return 0;
}
