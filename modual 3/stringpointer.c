#include<stdio.h>
#include<string.h>
int main()
{
	char *a,*b,str1[100],str2[100];
	a=&str1;
	b=&str2;
	printf("Enter the first string :");
	gets(a);
	printf("Enter the second string :");
	gets(b);
	strcat(a,b);
 puts(a);
return 0;
}
