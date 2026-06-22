# include <stdio.h>
# include <stdlib.h>

// This program demonstrates how to insert an element into an array at a specific index position.
int arr [] = {1, 2, 4, 5};
int n = 4;
int index_position = 2;

void main() {
    for (int i = n; i > index_position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index_position] = 3;
    // n++; // This line is commented out because the size of the array is fixed and cannot be increased.
    // The above line can only work if the array is dynamically allocated and has enough space to accommodate the new element,
    // or fixed with additional space for new elements.

    printf("%d ", arr[index_position]);
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}