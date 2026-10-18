#include<stdio.h>
#include<conio.h>
int main(){
	int i, n, arr[100],val;
	
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	
	printf("Enter elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter element value to search: ");
	scanf("%d",&val);
	
	int low=0, high=n-1, mid;
	
	
	
	while(low <= high){
	
	mid = (low + high) / 2;
	
		if(arr[mid] == val){
			printf("Element Found");
			break;
		}
		else if(arr[mid] < val) low = mid+1;
		else high = mid - 1;
		
	}
	
	if(low>high){
		printf("Element not Found");
	}
}
