# include <stdio.h>
# include <stdlib.h>

// This program demonstrates how to delete an element from an array at a specific index position.
int arr [] = {1, 2, 4, 5};
int n = 4;
int index_position = 2;

void main() {
    for (int i = index_position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Decrease the size of the array by one since we have effectively removed an element.

    printf("%d ", arr[index_position]);
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}