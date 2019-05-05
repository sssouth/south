//将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的
#include <stdio.h>
#include <stdlib.h>
struct data* addNode(struct data* phead);
struct data* sort(struct data* head1,struct data* head2);
struct data{
	int num;
	struct data* next;
};
struct data* addNode(struct data* phead)//创建链表函数 
{
	char ch;
	struct data* ptemp=phead;
	do
	{
		struct data* add=(struct data*)malloc(sizeof(struct data));//添加新节点 
		printf("\n请输入一个数字:");
		scanf("%d",&add->num);
		ptemp->next=add;//ptemp表示临时指针，指向下一个节点 
		ptemp=add;//并让ptemp一直跟踪尾节点 
		printf("\n是否要继续添加新节点(Y/N):");
		fflush(stdin);
		ch=getchar();
	}while(ch=='Y');
	ptemp->next=NULL;
	return phead;
}
struct data* sort(struct data* head1,struct data* head2)//合并链表函数，两个参数表示要拼接的链表头指针 
{
	struct data* temp1=head1->next;
	struct data* temp2=head2->next;
	struct data* newNext; 
	struct data* newLink=(struct data*)malloc(sizeof(struct data));//新链表
	newLink->next=NULL;
	newNext=newLink;
	while(1)
	{	
	//分情况讨论，将最小的放前面，最大的放后面  
		if(temp1==NULL)
		{
			newNext->next=temp2;
			break;
		}
		if(temp2==NULL)
		{
			newNext->next=temp1;
			break;
		}	 
		if(temp1->num <= temp2->num)
		{
			newNext->next=temp1;
			temp1=temp1->next;//temp1指向它的下一个节点 
		}
		else if(temp1->num > temp2->num)
		{
			newNext->next=temp2;
			temp2=temp2->next;//temp2指向它的下一个节点  
		}
		else;
		newNext=newNext->next;//newNext跟踪它的尾节点 
	}
	return newLink;
}
int main(void)
{
	char ch;
	struct data* temp=NULL;
	struct data* head1=(struct data*)malloc(sizeof(struct data));
	struct data* head2=(struct data*)malloc(sizeof(struct data));
	head1->next=NULL;
	head2->next=NULL;
	printf("创建第一个链表:\n");
	addNode(head1);
	printf("\n创建第二个链表:\n");
	addNode(head2);
	head1=sort(head1,head2);
	temp=head1->next;
	while(temp!=NULL)
	{
		printf("%d\t",temp->num);
		temp=temp->next;
	}
	return 0;
} 
