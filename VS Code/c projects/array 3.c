#include <stdio.h>

int main() {
    int array[10];
    int *ptr = array; // Pointer to the first element of the array

    // Taking input from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr + i); // Using pointer arithmetic to access array elements
    }

    // Printing the content of the array using pointers
    printf("\nArray elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i)); // Using pointer arithmetic to access array elements
    }

    return 0;
}
