//两个乒乓球队进行比赛,各出三人.甲队为a,b,c三人.乙队为x,y,z三人.已抽签决定比赛名单.
//有人向队员打听比赛的名单.a说他不和x比,c说他不和x,z比,请编程序找出三队赛手的名单.
#include <stdio.h>
#include <string.h> 
int main(void)
{
	char i,j,k;//i,j,k代表a,b,c的对手 
	char A[3]={'x','y','z'};
	for(i='x';i<='z';i++)
	{
		for(j='x';j<='z';j++)
		{
			if(i!=j)//对手不能重复 
			{
				for(k='x';k<='z';k++)
				{
					if(i!=k && j!=k && i!='x' && k!='x' && k!='z')//满足a不和x比,c不和x,z比
					{
						printf("比赛名单:\n");
						printf("a--%c,b--%c,c--%c",i,j,k);
						break;
					}
				}
			}
		}
	}
	return 0;
}
