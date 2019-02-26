//题目：从键盘输入一些字符,逐个把它们写到磁盘文件上,直到输入一个 # 为止.
#include <stdio.h>
int main(void)
{
	char ch;
	FILE *fp;//文件指针 
	fp=fopen("83.txt","w");//打开文件 
	if(fp==NULL)//若fp==NULL,文件打开失败 
	{
		printf("文件打开失败\n");
	}
	else
	{
		while(1)//向文件输入字符 
		{
			printf("请输入一个字符:\n");
			ch=getchar();
			if(ch!='#')
				fputc(ch,fp);
			else
				break;
		}
	}
	fclose(fp);//关闭文件 
	return 0;
}
