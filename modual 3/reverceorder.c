#include<stdio.h>
int main()
{
	int c,m;
	printf("Type any number\n");
	scanf("%d",&c);
	
	while(c>0)
	{
		m=c%10;
		printf("%d",m);
		c=c/10;
		
	}
	return 0;
}
