#include<stdio.h>
int main()
{
	int a,b,c;
	a=0;
	for(a=0;a<=5;a++)
	{
		for(b=0;b<a;b++)
		{
		
			printf("*",b);
		}	
		printf("\n ");
	}
	return 0;
}
