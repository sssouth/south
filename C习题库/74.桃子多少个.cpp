//题目：海滩上有一堆桃子,五只猴子来分.第一只猴子把这堆桃子平均分为五份,多了一个,这只猴子把多的一个扔入海中,拿走了一份;
//第二只猴子把剩下的桃子又平均分成五份,又多了一个,它同样把多的一个扔入海中,拿走了一份;第三、第四、第五只猴子都是这样做的。
//问海滩上原来最少有多少个桃子?
#include <stdio.h>
int peach(int a);
int peach(int a)
{
	if(a==1)
		return 1*5+1;
	else
		return 5*peach(a-1)+1;
}
int main(void)
{
	int sum;
	sum=peach(5);
	printf("沙滩上至少有桃子%d个",sum);
	return 0;
} 
