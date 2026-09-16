#include<conio.h>
#include<stdio.h>
void traverse(int arr[], int n){
    int i;
    printf("\nArray elements are: ");
    for(i=0;i<n;i++)
        printf("%d  ",arr[i]);
}

int main()
{
	int n;
	
    printf("\nEnter the size of Array: ");
    scanf("%d",&n);

    printf("\nEnter %d Elements: \n",n);
    int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
    traverse(arr,n);
	
return 0;
}