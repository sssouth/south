//����ĳ��ĳ��ĳ��,�ж���һ������һ��ĵڼ��죿
#include <stdio.h>
int main(void)
{
	int M[12]={31,28,31,30,31,30,31,31,30,31,30,31};//��ƽ����ÿ�µ���������������� 
	int i,year,month,day,DAY=0;
	printf("������x��x��x��:");
	scanf("%d,%d,%d",&year,&month,&day);
	for(i=0;i<month-1;i++)//ѭ���������� 
	{
		DAY=DAY+M[i];
	}
	DAY=DAY+day;
	if((year%4==0 && year%100!=0 || year%400==0) && month>2)//�����������,���·ݴ���2��,������1 
		DAY+=1;
	printf("%d��%2d��%2d������һ��ĵ�%d��",year,month,day,DAY);
	return 0;
}
