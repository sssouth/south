//��Ŀ����n����Χ��һȦ,˳���ź�.�ӵ�һ���˿�ʼ��������1��3������,������3�����˳�Ȧ��,��������µ���ԭ���ڼ��ŵ���λ.
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,n,sum,count=0;
	int *A;
	printf("������n:\n");//n��ʾ���м���ΧȦ 
	scanf("%d",&n);
	sum=n;
	A=(int *)malloc(n*sizeof(int));//��̬�ڴ�ռ� 
	if(A==NULL)
	{
		printf("��ַ����ʧ��\n");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			A[i]=i+1;//�����ÿһ��Ԫ�ش���ÿ���˵ı�� 
		}
		
		while(true)
		{
			for(i=0;i<n;i++)
			{
				if(A[i]!=0)
				{
					count++;
					if(count==3)//count=3��ʾ����Ϊ3��A[i]=0��ʾ����Ϊ3����ɾ�� 
					{
						count=0;
						A[i]=0;
						sum--;//sum��ʾ��ʣ������ 
					}
				}
			}
			if(sum==1)//���һ�� 
				break;
		}
		for(i=0;i<n;i++)
		{
			if(A[i]!=0)
			{
				printf("������µ���ԭ����%dλ.",A[i]);//�ҳ����һ�� 
			}
		}
	}
	return 0;
}
