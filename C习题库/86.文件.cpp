//题目：有两个磁盘文件A和B,各存放一行字母,要求把这两个文件中的信息合并(按字母顺序排列),输出到一个新文件C中.
#include <stdio.h>
#include <string.h>
void STR(char S[],int n);
void STR(char S[],int n)//对字符串进行排序 
{
	int i,j,change=1;
	char x;
	for(i=0;i<n-1 && change==1;i++)
	{
		change=0;
		for(j=0;j<n-1-i;j++)
		{
			if(S[j]>S[j+1])
			{
				x=S[j+1];
				S[j+1]=S[j];
				S[j]=x;
				change=1;
			}
		}
	}
} 
int main(void)
{
	FILE *fp_a,*fp_b,*fp_c;//文件指针 
	char A[20];//字符数组 
	char B[20];
	char str_a[40];
	char str_b[20];
	//向文件A中输入字符串 
	fp_a=fopen("A.txt","w");
	printf("请输入字符串A:\n");
	gets(A);
	fputs(A,fp_a);
	fclose(fp_a);
	//向文件B中输入字符串 
	fp_b=fopen("B.txt","w");
	printf("请输入字符串B:\n");
	gets(B);
	fputs(B,fp_b);
	fclose(fp_b);
	//将A,B文件的内容排序输入文件C中 
	fp_c=fopen("c.txt","w");
	fp_a=fopen("A.txt","r");
	fp_b=fopen("B.txt","r");
	fgets(str_a,strlen(A)+1,fp_a);
	
	puts(str_a);
	fgets(str_b,strlen(B)+1,fp_b);
	puts(str_b);
	strcat(str_a,str_b);
	STR(str_a,strlen(str_a));
	puts(str_a);
	fputs(str_a,fp_c);
	fclose(fp_c);
	return 0;
}
