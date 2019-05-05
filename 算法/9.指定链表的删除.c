#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
#define N 10	//N表示链表的节点个数 
struct data{
	int num;
	struct data* next;
};

void Print(struct data *head);
void Delete(struct data* head,int count);

int main(void)
{
	int n,count;
	struct data *head=(struct data*)malloc(sizeof(struct data));
	head->next=NULL;
	count=Create(head);		//Create()返回链表的节点数 
	/*printf("\n请输入你想删除链表的倒数第n个节点n:");
	scanf("%d",&n);
	if(n%count==0)
		n=count;
	else
		n=n%count;*/ 
	srand((unsigned)time(NULL));	//随机产生一个要删除的链表节点 
	n=(rand()+1)%count;		//确保产生的数有效 
	if(n==0)
		n=count;
	printf("\n\n随机删除链表的倒数第%d个元素.\n\n",n);
	Delete(head,count-n);	//删除倒数第n个节点 
	Print(head);	//打印链表 
	return 0;
}
int  Create(struct data* head)
{
	int i=0,count=0;
	srand((unsigned)time(NULL)); 
	struct data *add,*temp=head;
	while(i<N)
	{
		add=(struct data*)malloc(sizeof(struct data));	//申请动态空间malloc() 
		add->num=rand()%100;	//随机产生链表数据 
		/*printf("请输入链表的一个数据:");
		scanf("%d",&add->num);*/ 
		temp->next=add;		//temp指向最后一个节点 
		temp=add;	//temp跟踪最后一个节点 
		count++;i++;	//count记录链表节点数 
	}
	add->next=NULL;		//最后一个节点指向空
	Print(head); 	//打印创建的链表 
	return count;
}
void Delete(struct data* head,int count)
{
	int i;
	struct data *phead=head,*p=phead->next;
	for(i=0;i<count;i++)	//找到要删除的节点位置 
	{
		phead=phead->next;
		p=p->next;
	}
	phead->next=p->next;	
}
void Print(struct data *head)
{
	struct data *temp=head->next; 
	while(temp->next)
	{
		printf("%d->",temp->num);
		temp=temp->next; 
	}
	printf("%d",temp->num);
}
