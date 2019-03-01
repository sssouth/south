#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void menu();
void menu_(); 
void Input();
void Print();
void Read();
void Save(); 
void Modify();
void Insert(); 
void Delete();
void Search();
void Rent();
void Statis();
void Sign_in();
void Register();
int isExisted(int n);


#define PRINT "\t*********************************************************************************************************************************************\n" 
#define PRINT1 "�����\t  ��������  \t��������\t�����Ա�\t��������\t������ϵ��ʽ\t�������\t��������\t������������\t�������״̬\n"

typedef struct Shop_infor
{
	int num;
	char name[20];
	char owner[20];
	char sex[5];
	int old;
	char tele[20];
	char area[5];
	char kind[10];
	char year[6];
	char isent[5];
	struct Shop_infor *next;	
}SHOP;

//ȫ�ֱ���,���������Ϣ����
SHOP *shop=(SHOP *)malloc(sizeof(SHOP));
//ȫ�ֱ���,��¼�ڵ��� 
int m=0;


//=====================================����˵�����======================================== 
void menu()
{
	int x;
	do
	{
		printf("\n\n\n");
		printf("\t\t\t\t\t\t******************��ӭ����������ϵͳ****************\n");
		printf("\t\t\t\t\t\t======================================================\n");
		printf("\t\t\t\t\t\t------��1.��ӵ�����Ϣ\t\t2.���������Ϣ��------\n\n");
		printf("\t\t\t\t\t\t------��3.�޸ĵ�����Ϣ\t\t4.ɾ��������Ϣ��------\n\n");
		printf("\t\t\t\t\t\t------��5.���ҵ�����Ϣ\t\t6.ͳ�Ƶ���������------\n\n");
		printf("\t\t\t\t\t\t------��7.�������\t\t8.���������Ϣ��------\n\n");
		printf("\t\t\t\t\t\t----------------------��0.�˳� ��---------------------\n");
		printf("\t\t\t\t\t\t======================================================\n\n");
		printf(PRINT);
		printf("\n\t��ѡ��������Ҫ�ķ���:");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				Input();
				Save();
				break;
			case 2:
				Print();
				break;
			case 3:
				Modify();
				Save();
				break;
			case 4:
				Delete();
				Save();
				break;
			case 5:
				Search();
				break;
			case 6:
				Statis();
				break;
			case 7:
				Rent();
				Save();
				break;
			case 8:
				Insert();
				Save();
				break;
			case 0:
				break;
		}
	}while(x!=0);	
}                                    


//=====================================������Ϣ����======================================== 
void Read()
{
	SHOP *head,*p,*end;
	FILE *fp;
	head=(SHOP *)malloc(sizeof(SHOP));
	end=head;
	end->next=NULL;
	shop=end;//��ȡ�ļ��е�����,����������� 
	fp=fopen("SAVE.txt","r");
	if(fp==NULL)
	{
	//	printf("\n\t�ļ���ʧ��\n");
	//	exit(0);
		fp=fopen("SAVE.txt","w");
		fclose(fp); 
		fp=fopen("SAVE.txt","r");
	}
	while(!feof(fp))
	{
		p=(SHOP *)malloc(sizeof(SHOP));
		fscanf(fp,"%d %s %s %s %d %s %s %s %s %s\n",&p->num,p->name,p->owner,p->sex,&p->old,p->tele,p->area,p->kind,p->year,p->isent);
		end->next=p;
		end=p;
	}
	end->next=NULL;
	fclose(fp);
}


//=====================================������Ϣ����========================================
void Save()
{
	FILE *fp;
	SHOP *p;
	p=shop->next;
	fp=fopen("SAVE.txt","w");
	if(fp==NULL)
	{
		printf("\n\t�ļ���ʧ��\n");
		exit(0); 
	}
	if(p==NULL)
	{
		printf("\n\t���޵�����Ϣ\n");
	}
	while(p)
	{
		fprintf(fp,"%d %s %s %s %d %s %s %s %s %s\n",p->num,p->name,p->owner,p->sex,p->old,p->tele,p->area,p->kind,p->year,p->isent);
		p=p->next;
	}
	fclose(fp);
	
}


//=====================================�жϵ�����Ƿ���ں���========================================
int isExisted(int n)
{
	int flag=0;
	SHOP *p=shop->next;
	if(p==NULL)
		return 0;
	while(p)
	{
		if(p->num==n)
		{
			flag=1;
			break;
		}
		p=p->next;
	}
	if(flag==0)
		return 0;
	else
		return 1;
}


//=====================================������溯��========================================
void Input()
{
	SHOP *p,*s;
	char y_n[4];
	int num,n,year;
	s=shop;
	do
	{
		p=(SHOP *)malloc(sizeof(SHOP));
		printf("\n\n\t��ʼ������Ϣ:\n");
		printf("\n\t����������:");
		scanf("%d",&num);
		if(!isExisted(num))
		{
			p->num=num;
			printf("\n\t�������������:");
			scanf("%s",p->name);	
			printf("\n\t�������������:");
			scanf("%s",p->owner);
			printf("\n\t����������Ա�:");
			scanf("%s",p->sex);
			printf("\n\t�������������:");
			scanf("%d",&p->old);
			printf("\n\t����������绰:");
			scanf("%s",p->tele);
			printf("\n\t������������:");
			scanf("%s",p->area); 
			printf("\n\t�������������(1.˽Ӫ 2.����,���������,Ĭ��0):");
			scanf("%d",&n);
			switch(n)
			{
				case 1:
					strcpy(p->kind,"˽Ӫ");break;
				case 2:
					strcpy(p->kind,"����");break;
			} 
			printf("\n\t�����������������(1.һ�� 2.���� 3.���� 4.����,���������,Ĭ��0):");
			scanf("%d",&year);
			switch(year)
			{
				case 1:
					strcpy(p->year,"һ��");break;
				case 2:
					strcpy(p->year,"����");break;
				case 3:
					strcpy(p->year,"����");break;
				case 4:
					strcpy(p->year,"����");break;
			}
			printf("\n\t������������״̬(���� �� δ��):");
			scanf("%s",p->isent);
			getchar();
			s->next=p;
			s=p;
			m++;//�ڵ�����1
		}
		else
			printf("\n\t�õ�����Ѵ���\n");
	
		printf("\n\t�Ƿ�Ҫ����������Ϣ(yes/no):");
		scanf("%s",y_n);
	}while(strcmp(y_n,"yes")==0);
	s->next=NULL; 		
} 


//=====================================������溯��========================================
void Print()
{
	SHOP *p=shop->next;
	if(p==NULL)
	{
		printf("\n\t���޵�����Ϣ\n");
	}
	printf("\n\n������Ϣ����:\n");
	printf(PRINT1);
	printf(PRINT);
	while(p)
	{
		
		printf("%2d\t%8s\t%3s\t\t%s\t\t%2d\t\t%11s\t  %3s\t\t %4s\t  %4s\t\t  %4s\n",p->num,p->name,p->owner,p->sex,p->old,p->tele,p->area,p->kind,p->year,p->isent);
		p=p->next;
	}
	printf(PRINT);
	printf("\n");
}


//=====================================�޸ĵ��溯��========================================
void Modify()
{
	SHOP *p=shop->next;
	char Name[20];
	int choice,flag=0;
	printf("\n\n\t��������Ҫ�޸ĵĵ�������:");
	scanf("%s",Name);
	if(p==NULL)
		printf("\n\t���޵�����Ϣ\n"); 
	while(p)
	{
		if(strcmp(p->name,Name)==0)
		{
			printf("\n");
			printf("\n\t\t\t\t\t\t�޸ĵ���Ϣ������:\n");
			printf("\n\t\t\t\t\t\t********************************************\n"); 
			printf("\n\t\t\t\t\t\t��0.������\t\t\t��1.��������"); 
			printf("\n\t\t\t\t\t\t��2.��������\t\t\t��3.�����Ա�");
			printf("\n\t\t\t\t\t\t��4.��������\t\t\t��5.�����绰");
			printf("\n\t\t\t\t\t\t��6.�������\t\t\t��7.��������");
			printf("\n\t\t\t\t\t\t��8.��������\t\t\t��9.����״̬\n");
			printf("\n\t\t\t\t\t\t********************************************\n"); 
			printf("\n\t����������޸�ѡ��(0-9):");
			scanf("%d",&choice);
			switch(choice)
			{
				case 0:
					printf("\n\t�������µĵ�����:");
					scanf("%d",&p->num);
					break;
				case 1:
					printf("\n\t�������µĵ�������:");
					scanf("%s",p->name);
					break;
				case 2:
					printf("\n\t�������µĵ�������:");
					scanf("%s",p->owner);
					break;
				case 3:
					printf("\n\t�������µĵ����Ա�:");
					scanf("%s",p->sex);
					break;
				case 4:
					printf("\n\t�������µĵ�������:");
					scanf("%d",&p->old);
					break;
				case 5:
					printf("\n\t�������µĵ����绰:");
					scanf("%s",p->tele);
					break;
				case 6:
					printf("\n\t�������µĵ������:");
					scanf("%s",p->area);
					break;
				case 7:
					printf("\n\t�������µĵ�������:");
					scanf("%s",p->kind);
					break;
				case 8:
					printf("\n\t�������µ���������:");
					scanf("%s",p->year);
					break;
				case 9:
					printf("\n\t�������µĳ���״̬");
					scanf("%s",p->isent);
			}
			printf("\n\t������Ϣ�޸ĳɹ�!\n");
			flag=1;
			break;
		}
		p=p->next;
	}
	if(flag==0)
		printf("\n\t����������ƴ���!\n");
}


//=====================================��ѯ���溯��========================================
void Search()      /*��������ѯ��Ϣ����*/
{
	int choice,flag;
	int numb;
	char y_n[4];
	char tel[20];
	char name[20];
	char owner[20];
	SHOP *p=shop->next;
	SHOP f;

	do
	{
		printf("\n\t\t\t\t\tѡ���ѯ��:\n");
		printf("\n\t\t\t\t\t==========================================\n");
		printf("\t\t\t\t\t\t��1.�������Ų�ѯ		��2.������������ѯ\n\n");
		printf("\t\t\t\t\t\t��3.�������绰����		��4.���������Ʋ�ѯ\n\n");
		printf("\t\t\t\t\t\t***************��0.���ء�*****************\n"); 
		printf("\n\t\t==========================================\n");
		printf("\n\t�������ѯ����(0-4):");
		scanf("%d",&choice);
		if(choice==0)
		{
			break;
		}
		else
		{
			switch(choice)      /*������ѡȡ�Ĳ�ѯ������ѯ*/
			{
				case 1:
					printf("\n����������:");
					scanf("%d",&numb);
                    while(p!=NULL)
                    {
                        if(p->num==numb)
                        {
                            f=*p;
							break;
                        }
                        p=p->next;
                    }
					break;
				case 2:
					printf("\n\t�������������:");
					scanf("%s",owner);
                    while(p!=NULL)
                    {
                        if(strcmp(p->owner,owner)==0)
                        {
                            f=*p;
                            break;
                        }
                        p=p->next;
                    }
					break;
				case 3:
					printf("\n\t����������绰:");
					scanf("%s",tel);
                    while(p!=NULL)
                    {
                        if(strcmp(p->tele,tel)==0)
                        {
                            f=*p;
                            break;
                        }
                        p=p->next;
                    }
					break;
				case 4:
					printf("\n\t�������������:");
					scanf("%s",name);
                    while(p!=NULL)
                    {
                        if(strcmp(p->name,name)==0)
                        {
                            f=*p;
                            break;
                        }
                        p=p->next;
                    }
					break;	
				default: printf("\n\t��ѯ��ʽ����,��������ȷ�Ĳ�ѯ��ʽ!\n");
			}
		}
		printf(PRINT);
		printf(PRINT1);
		printf("%2d\t%8s\t%3s\t\t%s\t\t%2d\t\t%11s\t  %3s\t\t %4s\t  %4s\t\t  %4s\n",f.num,f.name,f.owner,f.sex,f.old,f.tele,f.area,f.kind,f.year,f.isent);
		printf(PRINT);
		printf("\n");								
		printf("\n\t�Ƿ�Ҫ������ѯ(yes/no):");     /*�Ƿ������ѯ*/
		scanf("%s",y_n);
		flag=(!(strcmp(y_n,"yes")));
	}while(flag);
}


//=====================================������溯��========================================
void Insert()
{
	int i,n,num;
	int year;
	SHOP *p;
	SHOP *s=shop->next;
	printf("\n\t��������Ҫ�����λ��(������һ�������ź�):");
	scanf("%d",&n);
	while(true)
	{
		if(s->num==n)
		{
			break;
		}
		s=s->next;
	} 
/*	for(i=1;i<n;i++)
	{
		s=s->next;
	}*/
	p=(SHOP *)malloc(sizeof(SHOP));
	while(true)
	{
		printf("\n\t����������:");
		scanf("%d",&num);
		if(!isExisted(num))	//�жϵ�����Ƿ���� 
		{
			p->num=num;
			printf("\n\t�������������:");
			scanf("%s",p->name);
			printf("\n\t�������������:");
			scanf("%s",p->owner);
			printf("\n\t����������Ա�:");
			scanf("%s",p->sex);
			printf("\n\t�������������:");
			scanf("%d",&p->old);
			printf("\n\t����������绰:");
			scanf("%s",p->tele);
			printf("\n\t������������:");
			scanf("%s",p->area); 
			printf("\n\t�������������(1.˽Ӫ 2.����,���������,Ĭ��0):");
			scanf("%d",&n);
			switch(n)
			{
				case 1:strcpy(p->kind,"˽Ӫ");break;
				case 2:strcpy(p->kind,"����");break;
				default:strcpy(p->kind,"0"); 
			} 
			printf("\n\t�����������������(1.һ�� 2.���� 3.���� 4.����,���������,Ĭ��0):");
			scanf("%d",&year);
			switch(year)
			{
				case 1:strcpy(p->year,"һ��");break;
				case 2:strcpy(p->year,"����");break;
				case 3:strcpy(p->year,"����");break;
				case 4:strcpy(p->year,"����");break;
				default:strcpy(p->year,"0");
			}
			printf("\n\t������������״̬(���� �� δ��):");
			scanf("%s",p->isent);
			m++;
			p->next=s->next;
			s->next=p;
			break;
		}
		else
			printf("\n\t�õ�����Ѵ���,����������.\n");
	}
	printf("\n������Ϣ�ɹ�!\n");
}


//=====================================ɾ�����溯��========================================
void Delete()
{
	int i,n;
	SHOP *p,*Temp;
	p=shop->next;
	printf("\n\t��������Ҫɾ���ĵ�����:");
	scanf("%d",&n);
	if(p==NULL)
	{
		printf("\n\t���޵�����Ϣ!\n");
	}
	while(1)
	{
	/*	if(p==NULL)
		{
			printf("\n���޵�����Ϣ!\n");
			break;
		}
	/*	if(p->num!=n)
		{
			Temp=p;
			p=p->next;
		}*/
		if(p->num==n)
		{
			Temp->next=p->next;
			free(p);
			printf("\n\tɾ���ɹ�!\n");
			break;
		}
		Temp=p;
		p=p->next;
    }
}


//=====================================ͳ�Ƶ��溯��========================================
void Statis()       
{
	int sy=0,jt=0;
	int y1=0,y2=0,y3=0,y5=0;
	int yes=0,no=0;
	int i;
	struct Shop_infor *p=shop->next;
	do
	{
		if(strcmp(p->kind,"˽Ӫ")==0)
		{
			sy++;
		}
		if(strcmp(p->kind,"����")==0)
		{
			jt++;
		}
	
		if(strcmp(p->year,"һ��")==0)
		{
			y1++;
		}
		if(strcmp(p->year,"����")==0)
		{
			y2++;
		}
		if(strcmp(p->year,"����")==0)
		{
			y3++;
		}
		if(strcmp(p->year,"����")==0)
		{
			y5++;
		}
		if(strcmp(p->isent,"����")==0)
		{
			yes++;
		}
		if(strcmp(p->isent,"δ��")==0)
		{
			no++;
		}
		p=p->next; 
	}while(p!=NULL);

	printf("\n\t\t\t\t\t\t\t\t����ͳ�ƽ��:\n");
	printf("\t\t\t\t\t\t\t===================================\t\t\n");            
	printf("\t\t\t\t\t\t\t˽Ӫ����: %d		�������: %d\n",sy,jt);
	printf("\t\t\t\t\t\t\tһ�����: %d		�������: %d\n",y1,y2);
	printf("\t\t\t\t\t\t\t�������: %d		�������: %d\n",y3,y5);
	printf("\t\t\t\t\t\t\t�������: %d		δ�����: %d\n",yes,no);
	printf("\t\t\t\t\t\t\t===================================\t\t\n");  

} 


//=====================================������溯��========================================
void Rent()
{
	int flag=0,numb;
	char y_n[4];
	SHOP *p=shop->next;
	
	do
	{
		printf("\n\t�����뽫Ҫ����ĵ����:");
		scanf("%d",&numb);
		while(p!=NULL)
		{
			if(p->num==numb)
			{
				if(strcmp(p->isent,"δ��")==0)
				{
					flag=1;
					break;
				} 
			}
			p=p->next;
		}
		if(flag==1)
		{
			strcpy(p->isent,"����");
			printf("\n\t���������Ϣ���޸�,�õ������ѳ���!\n"); 
		}
		else
		{
			printf("\n\t�õ��治���ڻ��Ѿ�����\n");
		}
		printf("\n\t�Ƿ�Ҫ�����������?������������yes,�˳�������no:");    
		scanf("%s",y_n);
	}while(strcmp(y_n,"yes")==0);
}


//=====================================������=======================================
int main(void)
{
	shop->next=NULL;
	Read();
	menu_();
	Save();
	return 0;
}


//=====================================��¼����=======================================
char user[30];
char pass1[10];
char pass2[10];
char f_pass[10];
char f_user[30];


//=====================================��¼����=======================================
void Sign_in()
{
	FILE *fp;
	int flag=0,count=1;
	printf("\n\n\n\t\t\t\t\t\t\t*****************��½����******************\n\n\n");
	while(count<=3)
	{
		printf("\n\t\t\t\t\t\t\t\t����������û���:");
		scanf("%s",user);
		printf("\n\t\t\t\t\t\t\t\t�������������:");
		scanf("%s",pass1);
		fp=fopen("User_Pass.txt","r");
		if(fp==NULL)
		{			
			printf("\n\t\t\t\t\t\t\t\t�ļ���ʧ��!\n");
		}
		while(!feof(fp))
		{
			fscanf(fp,"%s %s\n",f_user,f_pass);
			if(strcmp(f_user,user)==0 && strcmp(f_pass,pass1)==0)
			{
				flag=1;
				break;
			}	
		}
		fclose(fp);
		if(flag==1)
		{
			printf("\n\t\t\t\t\t\t\t\t   ��½�ɹ�!\n");
			break;
		} 
		else
			printf("\n\t\t\t\t\t\t\t\t������û������������!\n");
		count++;
	}
	if(flag==0)
	{
		printf("\n\t\t\t\t\t\t\t\t��Ǹ,���Ѳ����ټ�����½!\n"); 
	} 
}


//=====================================ע�ắ��=======================================
void Register()
{
	FILE *fp;
	int flag=0;
	fp=fopen("User.txt","r");
	if(fp==NULL)
	{
		fp=fopen("User.txt","w");
		fclose(fp);
		fp=fopen("User.txt","r");
	}
	while(true)
	{
		printf("\n\t\t\t\t\t\t\t\t����������û���:");
		scanf("%s",user);
		while(!feof(fp))
		{
			fscanf(fp,"%s\n",f_user);
			if(strcmp(f_user,user)==0)
			{
				flag=1;
				printf("\n\t\t\t\t\t\t\t\t���û����Ѵ���,����������!\n");
			}
		} 
		fclose(fp);
		
		if(flag==0)
		{
			fp=fopen("User.txt","w");
			fprintf(fp,"%s\n",user);
			fclose(fp);
			while(true)
			{
				printf("\n\t\t\t\t\t\t\t\t�������������:");
				scanf("%s",pass1);
				printf("\n\t\t\t\t\t\t\t\t���ٴ������������:");
				scanf("%s",pass2);
				if(strcmp(pass1,pass2)!=0)
				{
					printf("\n\t\t\t\t\t\t\t�������벻һ��,����������!");
				}
				else
				{
					fp=fopen("User_Pass.txt","a+");
					fprintf(fp,"%s %s\n",user,pass1);
					fclose(fp);
					printf("\n\t\t\t\t\t\t\t\tע��ɹ�!\n");
					break;
				}
			}	
		}
		
		if(flag==0)
			break; 	
	}
	Sign_in();
}


//=====================================��¼�˵�=======================================
void menu_()
{
	int choice;
	do
	{
		printf("\n\n\n\n\n");
		printf("\n\t\t\t\t\t\t\t   *************************************\n");
		printf("\n\t\t\t\t\t\t\t\t��ӭ�����������ϵͳ��½����!\n");
		printf("\n\t\t\t\t\t\t\t\t\t�û���¼\n");
		printf("\n\t\t\t\t\t\t\t\t\t�û�ע��\n");
		printf("\n\t\t\t\t\t\t\t\t\t �˳�\n");
		printf("\n\t\t\t\t\t\t\t   *************************************");
		printf("\n\n\t\t\t\t\t\t\t  ���������ѡ��(1.��¼ 2.ע�� 0.�˳�):");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Sign_in();menu();break;
			case 2:Register();break;
			case 0:break;
		} 
	}while(choice!=0);	
}

