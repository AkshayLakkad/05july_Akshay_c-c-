#include<stdio.h>
int main()
{

	int a,b;
	int num=0;
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=a;b++)
		{
			num++;
			printf("%d ",num);
		}
		printf("\n");
	}	
	return 0;
}

