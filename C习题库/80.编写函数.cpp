//��Ŀ������һ������ nums,��дһ������������ 0 �ƶ��������ĩβ,ͬʱ���ַ���Ԫ�ص����˳��.
#include <stdio.h>
int *array(int A[],int n);
int *array(int A[],int n)//����ָ���ͺ��� 
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(A[i]==0)//��0Ԫ���Ƶ�ĩβ 
		{
			for(j=i;j<n-1;j++)
			{
				A[j]=A[j+1];
			}
			A[n-1]=0;
		}
	}
	return A;
}
int main(void)
{
	int nums[10]={12,0,23,4,0,56,51,61,0,90};
	int i; 
	printf("���ԭ����:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",nums[i]);
	}
	printf("\n");
	array(nums,10);//���ú��� 
	printf("����ı������:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",nums[i]);
	}
	return 0;
}
