/*����һ���Ǹ����� num������������λ�ϵ�������ӣ�ֱ�����Ϊһλ��
ʾ��:
����: 38
���: 2 
����: ��λ��ӵĹ���Ϊ��3 + 8 = 11, 1 + 1 = 2������ 2 ��һλ�������Է��� 2 */ 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int num;
	scanf("%d",&num);
	printf("%d\n",fun(num));
	return 0;
}
int fun(int num)
{
	char A[10];
	int i,sum=0;
	sprintf(A,"%d",num);
	for(i=0;i<strlen(A);i++)
	{
		sum+=A[i]-48;
	}
	if(sum>9)
		fun(sum);
	else
		return sum;
}
