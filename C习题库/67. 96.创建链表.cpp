//��Ŀ������һ������;  ɾ������ĵ����� n ���ڵ㣬���ҷ��������ͷ���.
#include <stdio.h>
#include <stdlib.h>
struct student *Delete(struct student *PH,int t);
struct student//�ṹ�� 
{
	char num[12];
	char name[10];
	char sex[4];
	struct student *next;
};

struct student *Delete(struct student *PH,int t)
{
	int n,i;
	printf("������Ҫɾ���ĵ����ڵ�n:\n");
	scanf("%d",&n); 
	struct student *pTemp,*pPre;//��������ָ��ṹ���ָ����� 
	pTemp=PH;
	for(i=1;i<=t-3+1;i++)//ѭ����Ҫɾ���Ľڵ�λ�� 
	{
		pTemp=pTemp->next;
		pPre=pTemp;
	}
	pPre=pTemp;//ɾ���ڵ� 
	return PH;	
}
int main(void)
{
	int count=0,flag=1;//count��ʾ�ڵ���;flag��ʾ�Ƿ�������� 
	struct student *pHead=NULL;//ͷָ�� 
	struct student *pNew,*pEnd;//pNew�½ڵ�;pEndβ�ڵ� 
	pEnd=pNew=(struct student *)malloc(sizeof(struct student));
	
	while(flag)
	{
		printf("��������Ϣ(ѧ��,����,�Ա�):\n");
		scanf("%d",&pNew->num);
		scanf("%s",pNew->name);
		scanf("%s",pNew->sex);
		count++;
		if(count==1)//ֻ��һ���ڵ� 
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
		printf("�Ƿ�Ҫ��������:(1.��;0.��)\n");
		scanf("%d",&flag);	 
	}
	free(pNew);//�ͷŽڵ�ռ� 
	Delete(pHead,count);
	return 0;
}
