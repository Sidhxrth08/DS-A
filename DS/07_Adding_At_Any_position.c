#include<stdio.h>

int main(){
    int arr[10] = {10,20,30,40,50};
    int size = 5,ele,pos;

    printf("Enter pos ");
    scanf("%d",&pos);

    pos--;

    printf("Enter element ");
    scanf("%d",&ele);

    for(int i = size + 1;i > pos;i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = ele;
    size++;

    for(int i = 0;i < size;i++)
    {
        printf("%d ",arr[i]);
    }
}