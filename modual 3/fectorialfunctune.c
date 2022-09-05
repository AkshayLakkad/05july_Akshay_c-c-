#include<stdio.h>
int factorial(int a);
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    printf("factorial of number is %d :",factorial(a));
    return 0;
}

int factorial(int a)
{
    if(a==0)
        return 1;
    int factnm1=factorial(a-1);
    int factn=factnm1*a;
    return factn;
}



