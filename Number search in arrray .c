#include<conio.h>
#include<stdio.h>
int main()
{
	int arr[5];
	int i,num,k;
	
	
	printf("Enter numbers: \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d   ",arr[i]);
	}
	
	printf("\nEnter number to find:");
	scanf("%d",&num);
	
	for(i=0;i<5;i++)
	{
		if (num == arr[i])
		{
			k=0;
			break;
		}
		else
		{
			k=1;
		}
		
	}
	
	if (k==0){
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
	
getch();
}
