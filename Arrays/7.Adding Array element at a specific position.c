#include <stdio.h>
#include <conio.h> 

int main() {
    int arr[6] ;
    int elementToAdd;
    int i , p;
    
    printf("Enter 5 Elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

	printf("Enter Element position to add(1-6): ");
    scanf("%d", &p);
    
    p -= 1;
    
    printf("Enter Element to add: ");
    scanf("%d", &elementToAdd);

    for (i = 5; i > p; i--) {
        arr[i] = arr[i - 1];
    }


    arr[p] = elementToAdd;

    
    printf("\nArray after adding element at: %d \n",p+1);
    for (i = 0; i < 6; i++) {
        printf("Value at index %d is %d\n", i, arr[i]);
    }

    getch();  
}


