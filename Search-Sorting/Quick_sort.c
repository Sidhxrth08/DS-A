#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];

    int i = low;
    int j = high;

    while (i < j)
    {
     
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }

 
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }

      
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Put pivot at its correct position
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quick(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition_index = partition(arr, low, high);

        quick(arr, low, partition_index - 1);
        quick(arr, partition_index + 1, high);
    }
}

int main()
{
    int nums[] = {6, 5, 9, 3, 4, 8, 2, 1, 7};

    quick(nums, 0, 8);

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}
