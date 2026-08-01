#include<conio.h>
#include<stdio.h>
int main()
{
	int a[2][2] , b[2][2] , c[2][2];
	int i,j;
	
	
	printf("Enter Matrix-1: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	
	
	printf("Enter Matrix-2: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	
	printf("Matrix Addition: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j] = a[i][j] + b[i][j] ;
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
	
getch();
}
