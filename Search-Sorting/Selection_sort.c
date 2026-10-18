#include<stdio.h>
int main(){
	int arr[100]={2,7,11,8,6,5};
	int i,j,n=6;
	
//	printf("Enter no. of elements: ");
//	scanf("%d",&n);
//	
//	printf("Enter elements: \n");
//	for(i=0;i<n;i++)
//		scanf("%d",&arr[i]);
		
	
	for(i=0;i<n;i++){
		int min = i;
		
		for(j=i+1;j<n;j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		if(min != i){
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	
	printf("\nElements after Selection Sort: \n");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	
	return 0;
}
