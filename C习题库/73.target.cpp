//��Ŀ������һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ������������,���������ǵ������±�.
//����Լ���ÿ������ֻ���Ӧһ����.���ǣ��㲻���ظ��������������ͬ����Ԫ��.
#include <stdio.h>
int main(void)
{
	int nums[10]={12,3,6,8,19,34,74,67,61,20};
	int target=69;
	int i,j;
	for(i=0;i<9;i++)//ѭ�������������������� 
	{
		for(j=i+1;j<10;j++)
		{
			if(nums[i]+nums[j]==target)
			{
				break;
			}
		}
		if(nums[i]+nums[j]==target)
			break;
	}
	printf("%d+%d=%d,%d���±���%d,%d���±���%d",nums[i],nums[j],target,nums[i],i,nums[j],j);
	return 0;
}
