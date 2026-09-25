#include<stdio.h>

void mergesort(int arr[],int lb,int ub ){
	if(lb<ub){
		int mid= (lb+ub)/2;
		
		mergesort(arr , lb , mid);
		mergesort(arr , mid+1 , ub);
		merge(arr , lb , mid , ub);
	}
}

void smerge(int arr[] ,int lb ,int mid ,int ub){
	int i=lb;
	int j=mid+1;
	int temp[100] , k=0;
	
	while(i<=mid && j<=ub){
		if(arr[i] < arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	
	while(i<=mid)
		temp[k++] = arr[i++];
	while(j<=ub)
		temp[k++] = arr[j++];
		
	for(i=lb,k=0 ; i<=ub ; i++ , k++)
		arr[i] = temp[k];
		
}

int main(){
	int arr[100];
	int i,n;
	
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	
	printf("Enter elements: \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	int lb=0 , ub=n-1;
	
	mergesort(arr , lb , ub );
	
	printf("Sorted array: ");
     for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	
	return 0;
}
