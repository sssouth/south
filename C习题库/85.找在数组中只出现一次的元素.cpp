//题目：给定一个非空整数数组,除了某个元素只出现一次以外,其余每个元素均出现两次,找出那个只出现了一次的元素. 
#include <stdio.h>
int main(void)
{
	int A[11]={1,4,6,2,3,1,5,5,3,2,4};
	int i,j,flag;
	for(i=0;i<11;i++)
	{
		flag=0;
		for(j=0;j<11;j++)
		{
			
			if(i!=j && A[i]==A[j])
				flag=1;
		} 
		if(flag==0)
		{
			printf("%d在数组中只出现了一次\n",A[i]);
			break; 
		}
	}
	return 0;	
}
