/*����һ����������ɾ�������ظ���Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Ρ�
ʾ�� 1:
����: 1->1->2
���: 1->2
ʾ�� 2:
����: 1->1->2->3->3
���: 1->2->3*/
#include <stdio.h>
#include <stdlib.h>
typedef struct data
{
	int num;
	struct data *next;
}Data;
int Flag[20]={0};
void Create(Data *head);
void Delete(Data *head);
void Print(Data *head);
int main(void)
{
	Data *head=(Data *)malloc(sizeof(Data));
	head->next=NULL;
	Create(head);
	Delete(head);
}
void Create(Data *head)
{
	int num;
	Data *p=head;
	printf("��ʼ����ڵ����ݣ�����0������:\n");
	while(scanf("%d",&num),num!=0)
	{
		Data *add=(Data *)malloc(sizeof(Data));
		add->num=num;
		p->next=add;
		p=add;
	}
	p->next=NULL;
}
void Delete(Data *head)
{
	Data *p=head;
	while(p->next) 
	{
		if(Flag[p->next->num])
		{ 
			p->next=p->next->next;
		} 
		else
		{
			Flag[p->next->num]=1;
			p=p->next;
		}
	}
	Print(head);
}
void Print(Data *head)
{
	Data  *p=head->next;
	while(printf("%d\t",p->num),p=p->next);
}
