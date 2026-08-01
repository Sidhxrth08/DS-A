#include<conio.h>
#include<stdio.h>
int main()
{
	int a[2][2] , b[2][2] , mul[2][2];
	int i,j,k;
	
	
	printf("Enter Matrix-1: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
//			printf("\t");
		}
//		printf("\n");
	}
	
	
	printf("Enter Matrix-2: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
//			printf("\t");
		}
//		printf("\n");
	}
	
	
	printf("Matrix Multiplication: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mul[i][j] = 0;
			for(k=0;k<2;k++)
			{
				mul[i][j] = mul[i][j] + a[i][k] * b[k][j] ;
			}
		}
	}
	
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",mul[i][j]);
		}
		printf("\n");
	}
	
getch();
}
