//��Ŀ:���������������Ƕ������ɴ���:ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ,60-89��֮�����B��ʾ,60�����µ���C��ʾ.
#include <stdio.h>
int main(void)
{
	float score;
	printf("������ѧ���ɼ�:");
	scanf("%f",&score);
	if(score<60)
		printf("C");
	else if(60<=score<90)
		printf("B");
	else
		printf("A");
	return 0; 
}
