#include<stdio.h>
int main()
{
	int a,b,c;
	a=1;
	for(a=1;a<=10;a++)
	{
		for(b=10;b>a;b--)
		{
			printf(" ");
		}
		for (c=1;c<=a;c++)
		{
			printf("%d ",c);
		}
			printf("\n");
	}
	return 0;	
}
