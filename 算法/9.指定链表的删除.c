/*给定一个链表，删除链表的倒数第 n 个节点，并且输出删除后的链表。
给定一个链表: 1->2->3->4->5,和 n = 2,当删除了倒数第二个节点后,链表变为 1->2->3->5.说明:给定的n保证是有效的。*/
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
		printf("\n请输入节点的数据:");
		scanf("%d",&add->num);
		temp->next=add;
		temp=add;
		add=(Data *)malloc(sizeof(Data));
		printf("\n是否要继续添加节点?(继续数入Y/y)：");
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
	printf("\n请输入你想要删除的倒数节点:");
	scanf("%d",&n);
	while(n<=0)
	{
		printf("\n输入错误,请重新输入:");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
		p=p->next;
		if(p==NULL)
		{
			printf("\n输入的删除数据无效!\n");
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
