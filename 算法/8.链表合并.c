//��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵ�
#include <stdio.h>
#include <stdlib.h>
struct data* addNode(struct data* phead);
struct data* sort(struct data* head1,struct data* head2);
struct data{
	int num;
	struct data* next;
};
struct data* addNode(struct data* phead)//���������� 
{
	char ch;
	struct data* ptemp=phead;
	do
	{
		struct data* add=(struct data*)malloc(sizeof(struct data));//����½ڵ� 
		printf("\n������һ������:");
		scanf("%d",&add->num);
		ptemp->next=add;//ptemp��ʾ��ʱָ�룬ָ����һ���ڵ� 
		ptemp=add;//����ptempһֱ����β�ڵ� 
		printf("\n�Ƿ�Ҫ��������½ڵ�(Y/N):");
		fflush(stdin);
		ch=getchar();
	}while(ch=='Y');
	ptemp->next=NULL;
	return phead;
}
struct data* sort(struct data* head1,struct data* head2)//�ϲ�������������������ʾҪƴ�ӵ�����ͷָ�� 
{
	struct data* temp1=head1->next;
	struct data* temp2=head2->next;
	struct data* newNext; 
	struct data* newLink=(struct data*)malloc(sizeof(struct data));//������
	newLink->next=NULL;
	newNext=newLink;
	while(1)
	{	
	//��������ۣ�����С�ķ�ǰ�棬���ķź���  
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
			temp1=temp1->next;//temp1ָ��������һ���ڵ� 
		}
		else if(temp1->num > temp2->num)
		{
			newNext->next=temp2;
			temp2=temp2->next;//temp2ָ��������һ���ڵ�  
		}
		else;
		newNext=newNext->next;//newNext��������β�ڵ� 
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
	printf("������һ������:\n");
	addNode(head1);
	printf("\n�����ڶ�������:\n");
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
