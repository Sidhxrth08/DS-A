#include<stdio.h>

int main(){
    int arr[] = {54,63,21,98,5,7,21,547,45};
    int low = 0,high = 8;
    int target = 547;

    while(low <= high){
        int mid = (low + high)/2;

        if(target == arr[mid]) 
        {printf("Element Found\n");
        break;
        }
        else if(arr[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    if(low > high) printf("Element Not Found\n");

    return 0;
}