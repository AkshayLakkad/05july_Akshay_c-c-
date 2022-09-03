#include<stdio.h>
struct employ
{
	int no;
	int nm[10];
	int age;
	int add[10];
	
}emp[10];
int main()
{
	int a;
	for(a=0;a<5;a++)
	{
		printf("Enter employ info:%d\n",a+1);
		printf("Enter employ age:");
		scanf("%d",&emp[a].age);
		printf("Enter employ address:");
		scanf("%s",&emp[a].add);
		printf("Enter employ no:");
		scanf("%d",&emp[a].no);
		printf("Enter employ name:");
		scanf("%s",&emp[a].nm);
	}
	for(a=0;a<5;a++)
	{
		printf("\n Your student Info Is:%d",a+1);
		printf("Your Student No Is:%d",emp[a].no);
		printf("\n Your Student Name Is:%s",emp[a].nm);
		printf("Your student address Is:%s",emp[a].add);
		printf("Your Student age is:%d",emp[a].age);
	}
	
}
