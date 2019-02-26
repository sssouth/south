//题目：连接字符串.
#include <stdio.h>
#include <string.h>
int main(void)
{
	char A[50]={"xxnzjnyyszbdwzjh"};
	char B[20]={"xxwnkthlyhbnyrsnmh"};
	printf("连接的字符串:\n"); 
	puts(strcat(A,B));//字符串连接函数 
	return 0;
}
