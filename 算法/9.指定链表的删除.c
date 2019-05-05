#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
#define N 10	//N��ʾ����Ľڵ���� 
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
	count=Create(head);		//Create()��������Ľڵ��� 
	/*printf("\n����������ɾ������ĵ�����n���ڵ�n:");
	scanf("%d",&n);
	if(n%count==0)
		n=count;
	else
		n=n%count;*/ 
	srand((unsigned)time(NULL));	//�������һ��Ҫɾ��������ڵ� 
	n=(rand()+1)%count;		//ȷ������������Ч 
	if(n==0)
		n=count;
	printf("\n\n���ɾ������ĵ�����%d��Ԫ��.\n\n",n);
	Delete(head,count-n);	//ɾ��������n���ڵ� 
	Print(head);	//��ӡ���� 
	return 0;
}
int  Create(struct data* head)
{
	int i=0,count=0;
	srand((unsigned)time(NULL)); 
	struct data *add,*temp=head;
	while(i<N)
	{
		add=(struct data*)malloc(sizeof(struct data));	//���붯̬�ռ�malloc() 
		add->num=rand()%100;	//��������������� 
		/*printf("�����������һ������:");
		scanf("%d",&add->num);*/ 
		temp->next=add;		//tempָ�����һ���ڵ� 
		temp=add;	//temp�������һ���ڵ� 
		count++;i++;	//count��¼����ڵ��� 
	}
	add->next=NULL;		//���һ���ڵ�ָ���
	Print(head); 	//��ӡ���������� 
	return count;
}
void Delete(struct data* head,int count)
{
	int i;
	struct data *phead=head,*p=phead->next;
	for(i=0;i<count;i++)	//�ҵ�Ҫɾ���Ľڵ�λ�� 
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
