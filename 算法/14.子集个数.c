/*����һ������������ nums���ҳ��������ڳ˻�С�� k ��������������ĸ�����

ʾ�� 1:
����: nums = [10,5,2,6], k = 100
���: 8
����: 8���˻�С��100��������ֱ�Ϊ: [10], [5], [2], [6], [10,5], [5,2], [2,6], [5,2,6]��
��Ҫע����� [10,5,2] �����ǳ˻�С��100�������顣
˵��:
0 < nums.length <= 50000
0 < nums[i] < 1000
0 <= k < 10^6 */
#include <stdio.h>
#include <stdlib.h>
#define N 50000

int Search(int data[],int n,int k);

main()
{
	int n,i,k;
	int data[N];
	printf("Please input array's length:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	printf("Please input k:");
	scanf("%d",&k);
	printf("������������ĸ��� %d\t",Search(data,n,k));
}

int Search(int data[],int n,int k)
{
	int count=0,sum=1,i,j;
	for(j=0;j<n;j++)
	{
		for(i=j,sum=1;i<n;i++)
		{
			sum*=data[i];
			if(sum<k)
				count++;
			else
				break;
		}
	}
	return count;
}
