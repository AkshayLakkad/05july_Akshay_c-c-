#include<stdio.h>
int main()
{
	int number;
	float base, length,  breadth,high, area, radius;
	printf("1  triangle");
	printf("2 rectangle");
	printf("3 circle");
	printf("Enter thr choise");
	scanf("%d",&number);
	
	switch (number)
	{
		case 1:
			printf("Enter the base and high :\n");
			scanf("%f %f",&base , &high);
			area =0.5*base*high;
			printf("area of tringle is %f\n",area);
			break;
		case 2:
			printf("Enter the length and breadth :\n");
			scanf("%f %f",&length , &breadth);
			area=length*breadth;
			printf("area of rectangle is %f\n",area);
			break;
		case 3:
			printf("Enter the radius :\n");
			scanf("%f", &radius);
			area=3.14*radius*radius;
			printf("area of circle is %f\n",area);
			break;
					
	}
	return 0;
}
