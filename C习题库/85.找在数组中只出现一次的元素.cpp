//��Ŀ������һ���ǿ���������,����ĳ��Ԫ��ֻ����һ������,����ÿ��Ԫ�ؾ���������,�ҳ��Ǹ�ֻ������һ�ε�Ԫ��. 
#include <stdio.h>
int main(void)
{
	int A[11]={1,4,6,2,3,1,5,5,3,2,4};
	int i,j,flag;
	for(i=0;i<11;i++)
	{
		flag=0;
		for(j=0;j<11;j++)
		{
			
			if(i!=j && A[i]==A[j])
				flag=1;
		} 
		if(flag==0)
		{
			printf("%d��������ֻ������һ��\n",A[i]);
			break; 
		}
	}
	return 0;	
}
