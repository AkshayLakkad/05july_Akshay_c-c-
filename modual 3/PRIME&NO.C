#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c=0;
  clrscr();
  printf("Enter any number a:");
  scanf("%d",&a);
  for(b=1;b<=a;b++)
  {
  if (a%b==0)
	 {c++;
	 }

  }
  if(c==2)
  {
  printf("a is prime number");
  }
  else
  {
  printf("a is not prime number");
  }
  getch();
}
