#include<stdio.h>
int main(){
	int arr[5];
	int i,j,n = 5;
	

	for(i=0;i<n;i++){
		printf("Enter Element at index %d -> ",i);
        scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	
	return 0;
}