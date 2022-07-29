#include<stdio.h>
#include<conio.h>
void main()
{
	int Gujarati,English,Maths,Hindi,Sanskrit;
	float per;
	clrscr();
	printf("Enter All Five Subject Marks");
	scanf("%d%d%d%d%d",&Gujarati,&English,&Maths,&Hindi,&Sanskrit);
	per=(Gujarati+English+Maths+Hindi+Sanskrit)/5;
	printf("\npercentage is %f",per);
	if(per>=75)
	{
	printf("Distinction");
	}
	else if(per>=60)
	{
	printf("First Class");
	}
	else if(per>=50)
	{
	printf("Second Class");
	}
	else if(per>=35)
	{
	printf("Pass Class");
	}
	else
	{
	printf("Fail");
	}

	getch();
}