//��Ŀ���Ӽ�������һЩ�ַ�,���������д�������ļ���,ֱ������һ�� # Ϊֹ.
#include <stdio.h>
int main(void)
{
	char ch;
	FILE *fp;//�ļ�ָ�� 
	fp=fopen("83.txt","w");//���ļ� 
	if(fp==NULL)//��fp==NULL,�ļ���ʧ�� 
	{
		printf("�ļ���ʧ��\n");
	}
	else
	{
		while(1)//���ļ������ַ� 
		{
			printf("������һ���ַ�:\n");
			ch=getchar();
			if(ch!='#')
				fputc(ch,fp);
			else
				break;
		}
	}
	fclose(fp);//�ر��ļ� 
	return 0;
}
