#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[] = {10,20,30,40,50,60};
    bool condition = false;
    int ele,size = 6;

    printf("Enter element ");
    scanf("%d",&ele);

    for(int i = 0;i < size;i++)
    {
        if(arr[i] == ele){
            printf("Element found at index -> %d\n",i);
            condition = true;
            break;
        }
    }
    if(condition != true) printf("Not Found\n");

    return 0;

}