#include<stdio.h>
int main()
{
	int i,j,a[4][5],max;
	printf("Enter the matrics \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
		printf("The First Matrics \n");
		for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	max=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	printf("Max matrics is%d \n",max);
	return 0;
}

