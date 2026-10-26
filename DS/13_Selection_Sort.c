#include<stdio.h>

int main(){
    int arr[] = {2,7,11,8,6,5};
    int n = 6,i,j;

    for(i = 0;i < n-1;i++){
        int min = i;

        for(j = i + 1;j < n;j++)
        {
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

    for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}


    return 0;
}