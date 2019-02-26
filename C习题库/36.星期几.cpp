//题目：请输入星期几的第一个字母来判断一下是星期几,如果第一个字母一样,则继续判断第二个字母.
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char A,B;
	printf("请输入星期的第一个字母:\n");
	scanf("%c",&A);
	getchar();
	A=toupper(A);
	//按照第一个字母分情况讨论星期 
	switch(A)
	{
		case 'M':printf("星期一(Monday)\n");break;
		case 'T':printf("请输入星期的第二个字母(u,h):\n");
				 B=getchar(); 
				 getchar();
				 switch(B)
				 {
				 	case 'h':printf("星期四(Thursday)\n");break;
				 	case 'u':printf("星期二(Tuesday)\n");break;
				 	default:printf("输入错误\n");
				 } 
				 break;
		case 'W':printf("星期三(Wednesday)\n");break;
		case 'F':printf("星期五(Friday)\n");break;
		case 'S':printf("请输入星期的第二个字母(a,u):");
				 B=getchar();
				 getchar();
				 switch(B)
				 {
				 	case 'a':printf("星期六(Saturday)\n");break;
				 	case 'u':printf("星期天(Sunday)\n");break;
				 	default:printf("输入错误\n");
				 }
				 break;
		default:printf("输入错误\n");
	}
	return 0;
}
