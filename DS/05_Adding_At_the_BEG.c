#include<stdio.h>

int main(){
    int arr[10] = {10,20,30,40};
    int n;

    printf("Enter Element ");
    scanf("%d",&n);

    for(int i = 4;i > 0;i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = n;

    for(int i = 0;i < 5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}