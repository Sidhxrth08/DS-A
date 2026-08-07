#include <stdio.h>
#include <conio.h> 

int main() {
    int arr[6] ;
    int elementToAdd;
    int i;
    
    printf("Enter Elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter Element to add on Beginning: ");
    scanf("%d", &elementToAdd);

    for (i = 5; i > 0; i--) {
        arr[i] = arr[i - 1];
    }


    arr[0] = elementToAdd;

    
    printf("Array after adding element at the beginning:\n");
    for (i = 0; i < 6; i++) {
        printf("Value at index %d is %d\n", i, arr[i]);
    }

    getch(); 
    return 0; 
}


