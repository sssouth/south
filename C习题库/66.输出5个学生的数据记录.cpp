//��Ŀ����дinput()��output()�������룬���5��ѧ�������ݼ�¼. 
#include <stdio.h>
 typedef struct student
{
	char num[10];
	char name[10];
	char sex[3]; 
}STU;//��STU����struct student 
void input(STU A[],int i);
void output(STU B[],int i);
void input(STU A[],int i)//��������Ϊ������ 
{
	for(i=0;i<5;i++)
	{
		printf("�������%dλѧ����Ϣ(ѧ��,����,�Ա�):\n",i+1);
		scanf("%s",A[i].num);
		scanf("%s",A[i].name);
		scanf("%s",A[i].sex);
	}	
}
void output(STU B[],int i)//��������Ϊ������ 
{
	for(i=0;i<5;i++)
	{
		printf("��%dλѧ������Ϣ(ѧ��,����,�Ա�):\n",i+1);
		printf("ѧ��:%s\t",B->num);
		printf("����:%s\t",B->name);
		printf("�Ա�:%s\t",B->sex);
		printf("\n");
	}
}

int main(void)
{
	STU infor[5];
	input(infor,5);
	output(infor,5);
	return 0;
}
