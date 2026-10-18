#include <stdio.h>

int main() {
    int i, n, arr[100], val, found = 0;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element value to search: ");
    scanf("%d", &val);

    for(i = 0; i < n; i++) {
        if(arr[i] == val) {
            printf("Element Found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element not Found");
    }

    return 0;
}
