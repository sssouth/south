/*����һ������ɾ������ĵ����� n ���ڵ㣬�������ɾ���������
����һ������: 1->2->3->4->5,�� n = 2,��ɾ���˵����ڶ����ڵ��,�����Ϊ 1->2->3->5.˵��:������n��֤����Ч�ġ�*/
#include <stdio.h>
#include <stdlib.h>
typedef struct data
{
	int num;
	struct data *next;
}Data;
void Create(Data *head);
void Print(Data *head);
void Delete(Data *head);

int main(void)
{
	Data *head=(Data *)malloc(sizeof(Data));
	head->next=NULL;
	Create(head);
	Print(head);
	Delete(head);
	return 0;
} 
void Create(Data *head)
{
	char ch;
	Data *temp=head;
	Data *add=(Data *)malloc(sizeof(Data));
	do
	{
		printf("\n������ڵ������:");
		scanf("%d",&add->num);
		temp->next=add;
		temp=add;
		add=(Data *)malloc(sizeof(Data));
		printf("\n�Ƿ�Ҫ������ӽڵ�?(��������Y/y)��");
		fflush(stdin);
		ch=getchar();
	}while(ch=='Y' || ch=='y');
	free(add);
	temp->next=NULL;
}
void Print(Data *head)
{
	Data *temp=head->next;
	while(temp->next!=NULL)
	{
		printf("%d->",temp->num);
		temp=temp->next;
	}
	printf("%d\n",temp->num);
}
void Delete(Data *head)
{
	int i,n;
	Data *p=head,*s=head;
	printf("\n����������Ҫɾ���ĵ����ڵ�:");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("\n�������,����������:");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
		p=p->next;
		if(p==NULL)
		{
			printf("\n�����ɾ��������Ч!\n");
			exit(1);
		}
	}
	while(p->next)
	{
		p=p->next;
		s=s->next;
	}
	s->next=s->next->next;
	Print(head);
}
