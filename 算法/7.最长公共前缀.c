/*编写一个函数来查找字符串数组中的最长公共前缀。如果不存在公共前缀，返回空字符串 ""。
例：输入: ["flower","flow","flight"];		输入: ["dog","racecar","car"];
	输出: "fl"								输出: ""	*/
#include <stdio.h>
#include <string.h>
#define M 3
#define N 20
void Search(char A[][N])
{
	char B[N];
	int i,j,k,min=0,flag=1;
	min=strlen(A[0]);	//min表示字符数组中最短的字符串长度 
	for(i=1;i<M;i++)
	{
		if(strlen(A[i])<min)
			min=strlen(A[i]);
	}
	for(i=0;i<min;i++)
	{
		j=0;k=1;flag=1;
		while(k<M)
		{
			if(A[j][i]!=A[k][i])//若第一个数组与第二个数组的首元素不一致，则直接不用再进行比较，flag作为标识 
			{
				flag=0;break;
			}
			else	k++;
		}
		if(flag)	
			B[i]=A[0][i];//将相等元素存入字符数组B中 
		else	break;
	}
	B[i]='\0';//末尾应手动加上字符结束标志'\0'
	printf("最长公共前缀：\"%s\"",B); 
}
int main(void)
{
	int i;
	char A[M][N];
	printf("请输入字符串数组:\n");
	for(i=0;i<M;i++)	//输入N组字符串(gets()参数为数组名，即数组的首元素地址) 
		gets(A[i]);
	Search(A);
	return 0;
}
