#include<stdio.h>

int main(){
    int arr[] = {2,7,11,4,2,6};
    int i,j,n = 6,key;

    for(i = 1;i < n;i++){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[i] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}

    return 0;
}