//题目：给定一个字符串,找到它的第一个不重复的字符,并返回它的索引;如果不存在,则返回 -1.
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,j,flag=0;//flag做为不重复的标志 
	char str[20]={"zxcvbnmjhgbvcdfxz"};
	for(i=0;i<strlen(str);i++)//双层循环寻找不重复字符 
	{
		flag=0;
		for(j=0;j<strlen(str);j++)
		{
			if(i!=j && str[i]==str[j])//如果重复,flag=1 
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			printf("第一个不重复的字符的索引为%d\n",i);
			break;
		}
	}
	return 0;
}
