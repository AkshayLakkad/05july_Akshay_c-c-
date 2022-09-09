#include<stdio.h>
int main()
{
	int *a,*b,no1,no2,sum;
	a=&no1;
	b=&no2;
	printf("Enter any two number:");
	scanf("%d%d",&no1,&no2);
	sum=*a+*b;
	printf("Addition for teo number is:%d",sum);
	return 0;
	
}
