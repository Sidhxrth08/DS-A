#include<conio.h>
#include<stdio.h>
int main()
{
    int arr[10] = {10,20,30,40};
    int arr_size = 4,capacity = 10;
    int val = 0;

    if(arr_size < capacity)
    {   scanf("%d",&val);
        arr[arr_size] = val;
        arr_size++;
    }
    else{
        printf("Array Full");
    }

    for(int i = 0;i < arr_size;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}