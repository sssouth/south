//��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ�,�����һ����ĸһ��,������жϵڶ�����ĸ.
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char A,B;
	printf("���������ڵĵ�һ����ĸ:\n");
	scanf("%c",&A);
	getchar();
	A=toupper(A);
	//���յ�һ����ĸ������������� 
	switch(A)
	{
		case 'M':printf("����һ(Monday)\n");break;
		case 'T':printf("���������ڵĵڶ�����ĸ(u,h):\n");
				 B=getchar(); 
				 getchar();
				 switch(B)
				 {
				 	case 'h':printf("������(Thursday)\n");break;
				 	case 'u':printf("���ڶ�(Tuesday)\n");break;
				 	default:printf("�������\n");
				 } 
				 break;
		case 'W':printf("������(Wednesday)\n");break;
		case 'F':printf("������(Friday)\n");break;
		case 'S':printf("���������ڵĵڶ�����ĸ(a,u):");
				 B=getchar();
				 getchar();
				 switch(B)
				 {
				 	case 'a':printf("������(Saturday)\n");break;
				 	case 'u':printf("������(Sunday)\n");break;
				 	default:printf("�������\n");
				 }
				 break;
		default:printf("�������\n");
	}
	return 0;
}
