# include <stdio.h>
# include <stdlib.h>

// This program demonstrates how to traverse an array in reverse order and print its elements.
int arr[] = {1, 2, 3, 4, 5};
int n = 5;

void main() {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}