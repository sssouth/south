/*��Ŀ������һ���ַ����������ҳ����в������ظ��ַ�����Ӵ��ĳ���.
/*˼·�����ַ����ӵ�һ��Ԫ�ؿ�ʼ���в��ұȽϡ� 
�����õ�һ��Ԫ����ڶ���Ԫ�ؽ��бȽϣ�������ͬ�����õ�����Ԫ����ǰ�������бȽϣ��Դ�����(ֱ���������) 
�������ظ�Ԫ�أ���ʼ��һ�ֵıȽ�(��ʱ���ϴο�ʼ���бȽϵ�Ԫ�ص���һ����ʼ����)��ֱ���������
*/ 
#include <stdio.h>
#include <string.h>
#define N 20
int Find(char str[])
{
	int i=0,j=i+1,k,max=1,flag=1,length=1;
	while(i<strlen(str)-1)//��ֹ����Խ��(j=i+1) 
	{
		if(strlen(str)==0)//���ַ�������Ϊ0��1��ֱ�ӷ��� 
			return 0;
		if(strlen(str)==1)
			return 1;
		if(j==strlen(str))//j==strlen(str)����ѭ�� 
			break;
		length=1;//������ʾ�˴�ѭ�����ַ������� 
		for(k=i;k<j;k++)
		{
			if(str[j]!=str[k])
				length++;
			else
			{
				flag=0;break;//�����ظ�Ԫ�أ��������α��� 
			}	
		}
		if(length>max)//һֱ����maxΪ��ִ��ĳ��� 
			max=length;
		if(flag)
			j++;
		else
		{
			i++;length=1;j=i+1;flag=1;
		}
	}
	return max;
}
int main(void)
{
	char str[N];
	printf("�������ַ���str:");
	gets(str);
	printf("\n��ִ��ĳ���Ϊ:%d\n",Find(str));
	return 0;
}
