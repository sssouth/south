/*����һ���Ǹ����� num������������λ�ϵ�������ӣ�ֱ�����Ϊһλ��
ʾ��:
����: 38
���: 2 
����: ��λ��ӵĹ���Ϊ��3 + 8 = 11, 1 + 1 = 2������ 2 ��һλ�������Է��� 2 */ 
#include <stdio.h>
int fun(int num);
int main(void)
{
	int num;
	scanf("%d",&num);
	printf("%d\n",fun(num));
}
int fun(int num)
{
	int end,sum=0;
	while(num)
	{
		end=num%10;	//end�����λ�ϵ��� 
		sum+=end;
		num/=10;
	}
	if(sum<10)
		return sum;
	else
		return fun(sum);
}
