//����ƹ����ӽ��б���,��������.�׶�Ϊa,b,c����.�Ҷ�Ϊx,y,z����.�ѳ�ǩ������������.
//�������Ա��������������.a˵������x��,c˵������x,z��,�������ҳ��������ֵ�����.
#include <stdio.h>
#include <string.h> 
int main(void)
{
	char i,j,k;//i,j,k����a,b,c�Ķ��� 
	char A[3]={'x','y','z'};
	for(i='x';i<='z';i++)
	{
		for(j='x';j<='z';j++)
		{
			if(i!=j)//���ֲ����ظ� 
			{
				for(k='x';k<='z';k++)
				{
					if(i!=k && j!=k && i!='x' && k!='x' && k!='z')//����a����x��,c����x,z��
					{
						printf("��������:\n");
						printf("a--%c,b--%c,c--%c",i,j,k);
						break;
					}
				}
			}
		}
	}
	return 0;
}
