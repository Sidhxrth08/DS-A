#include<stdio.h>
int main(){
	int arr[100];
	int i,j,n,temp=0;
	
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	
	printf("Enter elements: \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("\nElements after Bubble Sort: \n");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	
	return 0;
}
