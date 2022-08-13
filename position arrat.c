#include<stdio.h>
int main()
{
	
	int a[5],b,key, count=0;
	printf("Enter the number");
	for(b=0;b<5;b++)
	{
		scanf("%d",&a[b]);	
	}
	printf("Enter a number for serch");
	scanf("%d",&key);
	printf("\n");
	
	for (b=0;b<5;b++)
	{
		if(a[b]==key)
		{
			printf("%d position is %d\n",key,b+1);
			count++;
		}
	}
	printf("\n");
	return 0;
}

