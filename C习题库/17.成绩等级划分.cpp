//题目:利用条件运算符的嵌套来完成此题:学习成绩>=90分的同学用A表示,60-89分之间的用B表示,60分以下的用C表示.
#include <stdio.h>
int main(void)
{
	float score;
	printf("请输入学生成绩:");
	scanf("%f",&score);
	if(score<60)
		printf("C");
	else if(60<=score<90)
		printf("B");
	else
		printf("A");
	return 0; 
}
