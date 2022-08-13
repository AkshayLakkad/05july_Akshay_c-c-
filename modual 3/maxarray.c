#include<stdio.h>
int main()
{
	int a[10],b,max;
	printf("Add any 10 Number\n");
	for(b=0;b<10;b++)
	{
		scanf("%d",&a[b]);
	}
	for(b=0;b<10;b++)
	{
		if(a[b]>a[0])
		{
			a[0]=a[b];
		}
		max=a[0];
	}
	printf("Maximum number is %d",a[0]);
	return 0;
}
