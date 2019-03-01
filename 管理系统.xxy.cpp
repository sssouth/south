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
#define PRINT1 "店面号\t  店面名称  \t店主姓名\t店主性别\t店主年龄\t店主联系方式\t店面面积\t店面类型\t店面租赁期限\t店面出租状态\n"

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

//全局变量,定义店面信息链表
SHOP *shop=(SHOP *)malloc(sizeof(SHOP));
//全局变量,记录节点数 
int m=0;


//=====================================进入菜单界面======================================== 
void menu()
{
	int x;
	do
	{
		printf("\n\n\n");
		printf("\t\t\t\t\t\t******************欢迎进入店面管理系统****************\n");
		printf("\t\t\t\t\t\t======================================================\n");
		printf("\t\t\t\t\t\t------★1.添加店面信息\t\t2.浏览店面信息★------\n\n");
		printf("\t\t\t\t\t\t------★3.修改店面信息\t\t4.删除店面信息★------\n\n");
		printf("\t\t\t\t\t\t------★5.查找店面信息\t\t6.统计店面数量★------\n\n");
		printf("\t\t\t\t\t\t------★7.出租店面\t\t8.插入店面信息★------\n\n");
		printf("\t\t\t\t\t\t----------------------★0.退出 ★---------------------\n");
		printf("\t\t\t\t\t\t======================================================\n\n");
		printf(PRINT);
		printf("\n\t请选择你所需要的服务:");
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


//=====================================读入信息函数======================================== 
void Read()
{
	SHOP *head,*p,*end;
	FILE *fp;
	head=(SHOP *)malloc(sizeof(SHOP));
	end=head;
	end->next=NULL;
	shop=end;//读取文件中的数据,存放在链表中 
	fp=fopen("SAVE.txt","r");
	if(fp==NULL)
	{
	//	printf("\n\t文件打开失败\n");
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


//=====================================保存信息函数========================================
void Save()
{
	FILE *fp;
	SHOP *p;
	p=shop->next;
	fp=fopen("SAVE.txt","w");
	if(fp==NULL)
	{
		printf("\n\t文件打开失败\n");
		exit(0); 
	}
	if(p==NULL)
	{
		printf("\n\t暂无店面信息\n");
	}
	while(p)
	{
		fprintf(fp,"%d %s %s %s %d %s %s %s %s %s\n",p->num,p->name,p->owner,p->sex,p->old,p->tele,p->area,p->kind,p->year,p->isent);
		p=p->next;
	}
	fclose(fp);
	
}


//=====================================判断店面号是否存在函数========================================
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


//=====================================输入店面函数========================================
void Input()
{
	SHOP *p,*s;
	char y_n[4];
	int num,n,year;
	s=shop;
	do
	{
		p=(SHOP *)malloc(sizeof(SHOP));
		printf("\n\n\t开始输入信息:\n");
		printf("\n\t请输入店面号:");
		scanf("%d",&num);
		if(!isExisted(num))
		{
			p->num=num;
			printf("\n\t请输入店面名称:");
			scanf("%s",p->name);	
			printf("\n\t请输入店主姓名:");
			scanf("%s",p->owner);
			printf("\n\t请输入店主性别:");
			scanf("%s",p->sex);
			printf("\n\t请输入店主年龄:");
			scanf("%d",&p->old);
			printf("\n\t请输入店主电话:");
			scanf("%s",p->tele);
			printf("\n\t请输入店面面积:");
			scanf("%s",p->area); 
			printf("\n\t请输入店面类型(1.私营 2.集体,若输入错误,默认0):");
			scanf("%d",&n);
			switch(n)
			{
				case 1:
					strcpy(p->kind,"私营");break;
				case 2:
					strcpy(p->kind,"集体");break;
			} 
			printf("\n\t请输入店面租赁期限(1.一年 2.两年 3.三年 4.五年,若输入错误,默认0):");
			scanf("%d",&year);
			switch(year)
			{
				case 1:
					strcpy(p->year,"一年");break;
				case 2:
					strcpy(p->year,"两年");break;
				case 3:
					strcpy(p->year,"三年");break;
				case 4:
					strcpy(p->year,"五年");break;
			}
			printf("\n\t请输入店面出租状态(已租 或 未租):");
			scanf("%s",p->isent);
			getchar();
			s->next=p;
			s=p;
			m++;//节点数加1
		}
		else
			printf("\n\t该店面号已存在\n");
	
		printf("\n\t是否要继续输入信息(yes/no):");
		scanf("%s",y_n);
	}while(strcmp(y_n,"yes")==0);
	s->next=NULL; 		
} 


//=====================================输出店面函数========================================
void Print()
{
	SHOP *p=shop->next;
	if(p==NULL)
	{
		printf("\n\t暂无店面信息\n");
	}
	printf("\n\n店面信息如下:\n");
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


//=====================================修改店面函数========================================
void Modify()
{
	SHOP *p=shop->next;
	char Name[20];
	int choice,flag=0;
	printf("\n\n\t请输入你要修改的店面名称:");
	scanf("%s",Name);
	if(p==NULL)
		printf("\n\t暂无店面信息\n"); 
	while(p)
	{
		if(strcmp(p->name,Name)==0)
		{
			printf("\n");
			printf("\n\t\t\t\t\t\t修改的信息表如下:\n");
			printf("\n\t\t\t\t\t\t********************************************\n"); 
			printf("\n\t\t\t\t\t\t★0.店面编号\t\t\t★1.店面名称"); 
			printf("\n\t\t\t\t\t\t★2.店主名字\t\t\t★3.店主性别");
			printf("\n\t\t\t\t\t\t★4.店主年龄\t\t\t★5.店主电话");
			printf("\n\t\t\t\t\t\t★6.店面面积\t\t\t★7.店面类型");
			printf("\n\t\t\t\t\t\t★8.租赁期限\t\t\t★9.出租状态\n");
			printf("\n\t\t\t\t\t\t********************************************\n"); 
			printf("\n\t请输入你的修改选项(0-9):");
			scanf("%d",&choice);
			switch(choice)
			{
				case 0:
					printf("\n\t请输入新的店面编号:");
					scanf("%d",&p->num);
					break;
				case 1:
					printf("\n\t请输入新的店面名称:");
					scanf("%s",p->name);
					break;
				case 2:
					printf("\n\t请输入新的店主名字:");
					scanf("%s",p->owner);
					break;
				case 3:
					printf("\n\t请输入新的店主性别:");
					scanf("%s",p->sex);
					break;
				case 4:
					printf("\n\t请输入新的店主年龄:");
					scanf("%d",&p->old);
					break;
				case 5:
					printf("\n\t请输入新的店主电话:");
					scanf("%s",p->tele);
					break;
				case 6:
					printf("\n\t请输入新的店面面积:");
					scanf("%s",p->area);
					break;
				case 7:
					printf("\n\t请输入新的店面类型:");
					scanf("%s",p->kind);
					break;
				case 8:
					printf("\n\t请输入新的租赁期限:");
					scanf("%s",p->year);
					break;
				case 9:
					printf("\n\t请输入新的出租状态");
					scanf("%s",p->isent);
			}
			printf("\n\t店面信息修改成功!\n");
			flag=1;
			break;
		}
		p=p->next;
	}
	if(flag==0)
		printf("\n\t输入店面名称错误!\n");
}


//=====================================查询店面函数========================================
void Search()      /*按条件查询信息函数*/
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
		printf("\n\t\t\t\t\t选择查询表:\n");
		printf("\n\t\t\t\t\t==========================================\n");
		printf("\t\t\t\t\t\t★1.按店面编号查询		★2.按店主姓名查询\n\n");
		printf("\t\t\t\t\t\t★3.按店主电话查找		★4.按店面名称查询\n\n");
		printf("\t\t\t\t\t\t***************★0.返回★*****************\n"); 
		printf("\n\t\t==========================================\n");
		printf("\n\t请输入查询类型(0-4):");
		scanf("%d",&choice);
		if(choice==0)
		{
			break;
		}
		else
		{
			switch(choice)      /*按照所选取的查询条件查询*/
			{
				case 1:
					printf("\n请输入店面号:");
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
					printf("\n\t请输入店主姓名:");
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
					printf("\n\t请输入店主电话:");
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
					printf("\n\t请输入店面名称:");
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
				default: printf("\n\t查询方式错误,请输入正确的查询方式!\n");
			}
		}
		printf(PRINT);
		printf(PRINT1);
		printf("%2d\t%8s\t%3s\t\t%s\t\t%2d\t\t%11s\t  %3s\t\t %4s\t  %4s\t\t  %4s\n",f.num,f.name,f.owner,f.sex,f.old,f.tele,f.area,f.kind,f.year,f.isent);
		printf(PRINT);
		printf("\n");								
		printf("\n\t是否要继续查询(yes/no):");     /*是否继续查询*/
		scanf("%s",y_n);
		flag=(!(strcmp(y_n,"yes")));
	}while(flag);
}


//=====================================插入店面函数========================================
void Insert()
{
	int i,n,num;
	int year;
	SHOP *p;
	SHOP *s=shop->next;
	printf("\n\t请输入你要插入的位置(插入哪一个店面编号后):");
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
		printf("\n\t请输入店面号:");
		scanf("%d",&num);
		if(!isExisted(num))	//判断店面号是否存在 
		{
			p->num=num;
			printf("\n\t请输入店面名称:");
			scanf("%s",p->name);
			printf("\n\t请输入店主姓名:");
			scanf("%s",p->owner);
			printf("\n\t请输入店主性别:");
			scanf("%s",p->sex);
			printf("\n\t请输入店主年龄:");
			scanf("%d",&p->old);
			printf("\n\t请输入店主电话:");
			scanf("%s",p->tele);
			printf("\n\t请输入店面面积:");
			scanf("%s",p->area); 
			printf("\n\t请输入店面类型(1.私营 2.集体,若输入错误,默认0):");
			scanf("%d",&n);
			switch(n)
			{
				case 1:strcpy(p->kind,"私营");break;
				case 2:strcpy(p->kind,"集体");break;
				default:strcpy(p->kind,"0"); 
			} 
			printf("\n\t请输入店面租赁期限(1.一年 2.两年 3.三年 4.五年,若输入错误,默认0):");
			scanf("%d",&year);
			switch(year)
			{
				case 1:strcpy(p->year,"一年");break;
				case 2:strcpy(p->year,"两年");break;
				case 3:strcpy(p->year,"三年");break;
				case 4:strcpy(p->year,"五年");break;
				default:strcpy(p->year,"0");
			}
			printf("\n\t请输入店面出租状态(已租 或 未租):");
			scanf("%s",p->isent);
			m++;
			p->next=s->next;
			s->next=p;
			break;
		}
		else
			printf("\n\t该店面号已存在,请重新输入.\n");
	}
	printf("\n插入信息成功!\n");
}


//=====================================删除店面函数========================================
void Delete()
{
	int i,n;
	SHOP *p,*Temp;
	p=shop->next;
	printf("\n\t请输入你要删除的店面编号:");
	scanf("%d",&n);
	if(p==NULL)
	{
		printf("\n\t暂无店面信息!\n");
	}
	while(1)
	{
	/*	if(p==NULL)
		{
			printf("\n暂无店面信息!\n");
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
			printf("\n\t删除成功!\n");
			break;
		}
		Temp=p;
		p=p->next;
    }
}


//=====================================统计店面函数========================================
void Statis()       
{
	int sy=0,jt=0;
	int y1=0,y2=0,y3=0,y5=0;
	int yes=0,no=0;
	int i;
	struct Shop_infor *p=shop->next;
	do
	{
		if(strcmp(p->kind,"私营")==0)
		{
			sy++;
		}
		if(strcmp(p->kind,"集体")==0)
		{
			jt++;
		}
	
		if(strcmp(p->year,"一年")==0)
		{
			y1++;
		}
		if(strcmp(p->year,"两年")==0)
		{
			y2++;
		}
		if(strcmp(p->year,"三年")==0)
		{
			y3++;
		}
		if(strcmp(p->year,"五年")==0)
		{
			y5++;
		}
		if(strcmp(p->isent,"已租")==0)
		{
			yes++;
		}
		if(strcmp(p->isent,"未租")==0)
		{
			no++;
		}
		p=p->next; 
	}while(p!=NULL);

	printf("\n\t\t\t\t\t\t\t\t店面统计结果:\n");
	printf("\t\t\t\t\t\t\t===================================\t\t\n");            
	printf("\t\t\t\t\t\t\t私营店面: %d		集体店面: %d\n",sy,jt);
	printf("\t\t\t\t\t\t\t一年店面: %d		两年店面: %d\n",y1,y2);
	printf("\t\t\t\t\t\t\t三年店面: %d		五年店面: %d\n",y3,y5);
	printf("\t\t\t\t\t\t\t出租店面: %d		未租店面: %d\n",yes,no);
	printf("\t\t\t\t\t\t\t===================================\t\t\n");  

} 


//=====================================出租店面函数========================================
void Rent()
{
	int flag=0,numb;
	char y_n[4];
	SHOP *p=shop->next;
	
	do
	{
		printf("\n\t请输入将要出租的店面号:");
		scanf("%d",&numb);
		while(p!=NULL)
		{
			if(p->num==numb)
			{
				if(strcmp(p->isent,"未租")==0)
				{
					flag=1;
					break;
				} 
			}
			p=p->next;
		}
		if(flag==1)
		{
			strcpy(p->isent,"已租");
			printf("\n\t店面出租信息已修改,该店面现已出租!\n"); 
		}
		else
		{
			printf("\n\t该店面不存在或已经出租\n");
		}
		printf("\n\t是否还要继续出租店面?若继续请输入yes,退出请输入no:");    
		scanf("%s",y_n);
	}while(strcmp(y_n,"yes")==0);
}


//=====================================主函数=======================================
int main(void)
{
	shop->next=NULL;
	Read();
	menu_();
	Save();
	return 0;
}


//=====================================登录界面=======================================
char user[30];
char pass1[10];
char pass2[10];
char f_pass[10];
char f_user[30];


//=====================================登录函数=======================================
void Sign_in()
{
	FILE *fp;
	int flag=0,count=1;
	printf("\n\n\n\t\t\t\t\t\t\t*****************登陆界面******************\n\n\n");
	while(count<=3)
	{
		printf("\n\t\t\t\t\t\t\t\t请输入你的用户名:");
		scanf("%s",user);
		printf("\n\t\t\t\t\t\t\t\t请输入你的密码:");
		scanf("%s",pass1);
		fp=fopen("User_Pass.txt","r");
		if(fp==NULL)
		{			
			printf("\n\t\t\t\t\t\t\t\t文件打开失败!\n");
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
			printf("\n\t\t\t\t\t\t\t\t   登陆成功!\n");
			break;
		} 
		else
			printf("\n\t\t\t\t\t\t\t\t输入的用户名或密码错误!\n");
		count++;
	}
	if(flag==0)
	{
		printf("\n\t\t\t\t\t\t\t\t抱歉,你已不能再继续登陆!\n"); 
	} 
}


//=====================================注册函数=======================================
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
		printf("\n\t\t\t\t\t\t\t\t请输入你的用户名:");
		scanf("%s",user);
		while(!feof(fp))
		{
			fscanf(fp,"%s\n",f_user);
			if(strcmp(f_user,user)==0)
			{
				flag=1;
				printf("\n\t\t\t\t\t\t\t\t该用户名已存在,请重新输入!\n");
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
				printf("\n\t\t\t\t\t\t\t\t请输入你的密码:");
				scanf("%s",pass1);
				printf("\n\t\t\t\t\t\t\t\t请再次输入你的密码:");
				scanf("%s",pass2);
				if(strcmp(pass1,pass2)!=0)
				{
					printf("\n\t\t\t\t\t\t\t密码输入不一致,请重新输入!");
				}
				else
				{
					fp=fopen("User_Pass.txt","a+");
					fprintf(fp,"%s %s\n",user,pass1);
					fclose(fp);
					printf("\n\t\t\t\t\t\t\t\t注册成功!\n");
					break;
				}
			}	
		}
		
		if(flag==0)
			break; 	
	}
	Sign_in();
}


//=====================================登录菜单=======================================
void menu_()
{
	int choice;
	do
	{
		printf("\n\n\n\n\n");
		printf("\n\t\t\t\t\t\t\t   *************************************\n");
		printf("\n\t\t\t\t\t\t\t\t欢迎来到店面管理系统登陆界面!\n");
		printf("\n\t\t\t\t\t\t\t\t\t用户登录\n");
		printf("\n\t\t\t\t\t\t\t\t\t用户注册\n");
		printf("\n\t\t\t\t\t\t\t\t\t 退出\n");
		printf("\n\t\t\t\t\t\t\t   *************************************");
		printf("\n\n\t\t\t\t\t\t\t  请输入你的选项(1.登录 2.注册 0.退出):");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Sign_in();menu();break;
			case 2:Register();break;
			case 0:break;
		} 
	}while(choice!=0);	
}

