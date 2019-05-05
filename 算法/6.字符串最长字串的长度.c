/*题目：给定一个字符串，请你找出其中不含有重复字符的最长子串的长度.
/*思路：将字符串从第一个元素开始进行查找比较。 
首先用第一个元素与第二个元素进行比较，若不相同，则让第三个元素与前两个进行比较，以此类推(直至数组结束) 
若存在重复元素，则开始新一轮的比较(此时从上次开始进行比较的元素的下一个开始进行)，直至数组结束
*/ 
#include <stdio.h>
#include <string.h>
#define N 20
int Find(char str[])
{
	int i=0,j=i+1,k,max=1,flag=1,length=1;
	while(i<strlen(str)-1)//防止数组越界(j=i+1) 
	{
		if(strlen(str)==0)//若字符串长度为0或1，直接返回 
			return 0;
		if(strlen(str)==1)
			return 1;
		if(j==strlen(str))//j==strlen(str)结束循环 
			break;
		length=1;//用来表示此次循环的字符串长度 
		for(k=i;k<j;k++)
		{
			if(str[j]!=str[k])
				length++;
			else
			{
				flag=0;break;//遇到重复元素，结束本次遍历 
			}	
		}
		if(length>max)//一直保持max为最长字串的长度 
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
	printf("请输入字符串str:");
	gets(str);
	printf("\n最长字串的长度为:%d\n",Find(str));
	return 0;
}
