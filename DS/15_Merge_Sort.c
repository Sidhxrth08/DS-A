#include <stdio.h>

void merger_sort(int arr[], int low, int mid, int high)
{
    int temp[10];
    int i = low, j = mid + 1, k = 0;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= high)
    {
        temp[k++] = arr[j++];
    }

    for (int idx = 0; idx < k; idx++)
    {
        arr[idx + low] = temp[idx];
    }
}

void merge(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        merge(arr, low, mid);
        merge(arr, mid + 1, high);

        merger_sort(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {45, 63, 95, 78, 2, 32, 54, 2, 1, 9};

    merge(arr, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}