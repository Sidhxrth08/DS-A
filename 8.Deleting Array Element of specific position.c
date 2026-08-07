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

	printf("Enter Element position to remove(0-5): ");
    scanf("%d", &p);
    
    p -= 1;
    

    for (i = p; i < 5; i++) {
        arr[i] = arr[i + 1];
    }


    
    printf("\nArray after Removing element at: %d \n",p+1);
    for (i = 0; i < 4; i++) {
        printf("Value at index %d is %d\n", i, arr[i]);
    }

    getch();  
}


