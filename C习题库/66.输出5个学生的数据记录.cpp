//题目：编写input()和output()函数输入，输出5个学生的数据记录. 
#include <stdio.h>
 typedef struct student
{
	char num[10];
	char name[10];
	char sex[3]; 
}STU;//用STU代替struct student 
void input(STU A[],int i);
void output(STU B[],int i);
void input(STU A[],int i)//函数参数为数组名 
{
	for(i=0;i<5;i++)
	{
		printf("请输入第%d位学生信息(学号,姓名,性别):\n",i+1);
		scanf("%s",A[i].num);
		scanf("%s",A[i].name);
		scanf("%s",A[i].sex);
	}	
}
void output(STU B[],int i)//函数参数为数组名 
{
	for(i=0;i<5;i++)
	{
		printf("第%d位学生的信息(学号,姓名,性别):\n",i+1);
		printf("学号:%s\t",B->num);
		printf("姓名:%s\t",B->name);
		printf("性别:%s\t",B->sex);
		printf("\n");
	}
}

int main(void)
{
	STU infor[5];
	input(infor,5);
	output(infor,5);
	return 0;
}
