#include<stdio.h>
int main()
{
	FILE *fptr;
	char str[100];
	fptr=fopen("E:/c c++/prectis/akshay.txt","r");
	fscanf(fptr,"%s",&str);
	printf(str);
	return 0;
}
