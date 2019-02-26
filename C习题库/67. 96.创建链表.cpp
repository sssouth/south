//题目：创建一个链表;  删除链表的倒数第 n 个节点，并且返回链表的头结点.
#include <stdio.h>
#include <stdlib.h>
struct student *Delete(struct student *PH,int t);
struct student//结构体 
{
	char num[12];
	char name[10];
	char sex[4];
	struct student *next;
};

struct student *Delete(struct student *PH,int t)
{
	int n,i;
	printf("输入想要删除的倒数节点n:\n");
	scanf("%d",&n); 
	struct student *pTemp,*pPre;//声明两个指向结构体的指针变量 
	pTemp=PH;
	for(i=1;i<=t-3+1;i++)//循环到要删除的节点位置 
	{
		pTemp=pTemp->next;
		pPre=pTemp;
	}
	pPre=pTemp;//删除节点 
	return PH;	
}
int main(void)
{
	int count=0,flag=1;//count表示节点数;flag表示是否继续输入 
	struct student *pHead=NULL;//头指针 
	struct student *pNew,*pEnd;//pNew新节点;pEnd尾节点 
	pEnd=pNew=(struct student *)malloc(sizeof(struct student));
	
	while(flag)
	{
		printf("请输入信息(学号,姓名,性别):\n");
		scanf("%d",&pNew->num);
		scanf("%s",pNew->name);
		scanf("%s",pNew->sex);
		count++;
		if(count==1)//只有一个节点 
		{
			pNew->next=pHead;
			pHead=pNew;
			pEnd=pNew;
		}
		else
		{
			pNew->next=NULL;
			pEnd->next=pNew;
			pEnd=pNew;
		}
		
		pNew=(struct student *)malloc(sizeof(struct student));
		printf("是否要继续输入:(1.是;0.否)\n");
		scanf("%d",&flag);	 
	}
	free(pNew);//释放节点空间 
	Delete(pHead,count);
	return 0;
}
