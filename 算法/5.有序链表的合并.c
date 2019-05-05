//��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵ�
#include <stdio.h>
#include <stdlib.h>
struct data* addNode(struct data* phead);
struct data* nixu(struct data* head);
int Judge(struct data* head1,struct data* head2);
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

int Judge(struct data* head1,struct data* head2)
{
	int flag1=0,flag2=0;
	struct data* temp1=head1->next;
	struct data* temp2=head2->next;
	struct data* next1=temp1->next;
	struct data* next2=temp2->next;
	while(next1)
	{
		if(temp1->num < next1->num)
		{
			flag1=1;//��ʾ�����������С��������
			break;
		}  
		else if(temp1->num > next1->num)
		{
			flag1=2;//��ʾ����������ɴ�С���� 
			printf("flag1=2\n");
			break;
		}
		else;
		temp1=temp1->next;
		next1=next1->next;
	}
	while(next2)
	{
		if(temp2->num < next2->num)
		{
			flag2=1;//��ʾ�����������С��������
			break;
		}  
		else if(temp2->num > next2->num)
		{
			flag2=2;//��ʾ����������ɴ�С���� 
			printf("flag2=2\n");
			break;
		}
		else; 
		temp2=temp2->next;
		next2=next2->next;
	}
	if(flag1==1 && flag2==1)
		return 1;//��ʾ������������ݾ���С�������� 
	else if(flag1==2 && flag2==2)
		return 2;//��ʾ������������ݾ��ɴ�С���� 
	else if(flag1==1 && flag2==2)
	{
		return 3;//��ʾ��һ����������С���󣬵ڶ����������ɴ�С 
	}
	else
	{
		return 4;//��ʾ��һ���������ɴ�С���ڶ�����������С����  
	}
}

struct data* nixu(struct data* head)
{
	struct data *temp=head->next;
	struct data *p=temp->next;
	struct data *s;
	temp->next=NULL;
	if(p==NULL)
		return head;
	while(p)
	{
		s=p->next;
		p->next=temp;
		temp=p;
		p=s;
		
	}
	return temp;
} 


struct data* sort(struct data* head1,struct data* head2)//�ϲ�������������������ʾҪƴ�ӵ�����ͷָ�� 
{
	struct data* temp1=head1->next;
	struct data* temp2=head2->next;
	struct data* newNext; 
	struct data* newLink=(struct data*)malloc(sizeof(struct data));//������
	newLink->next=NULL;
	newNext=newLink;
	
	if(Judge(head1,head2)==2)
	{
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
			if(temp1->num >= temp2->num)
			{
				newNext->next=temp1;
				temp1=temp1->next;//temp1ָ��������һ���ڵ� 
			}
			else if(temp1->num < temp2->num)
			{
				newNext->next=temp2;
				temp2=temp2->next;//temp2ָ��������һ���ڵ�  
			}
			else;
			newNext=newNext->next;//newNext��������β�ڵ� 
		}
		return newLink;	
	}
	else
	{
		if(Judge(head1,head2)==3)
		{
			temp2=nixu(head2);
		}
		else if(Judge(head1,head2)==4)
		{
			temp1=nixu(head1);
		}
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
