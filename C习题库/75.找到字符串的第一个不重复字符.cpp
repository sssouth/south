//��Ŀ������һ���ַ���,�ҵ����ĵ�һ�����ظ����ַ�,��������������;���������,�򷵻� -1.
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,j,flag=0;//flag��Ϊ���ظ��ı�־ 
	char str[20]={"zxcvbnmjhgbvcdfxz"};
	for(i=0;i<strlen(str);i++)//˫��ѭ��Ѱ�Ҳ��ظ��ַ� 
	{
		flag=0;
		for(j=0;j<strlen(str);j++)
		{
			if(i!=j && str[i]==str[j])//����ظ�,flag=1 
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("��һ�����ظ����ַ�������Ϊ%d\n",i);
			break;
		}
	}
	return 0;
}
