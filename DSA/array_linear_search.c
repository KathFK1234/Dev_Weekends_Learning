# include <stdio.h>
# include <stdlib.h>

// This program demonstrates how to conduct a linear search in an array.
int arr[] = {1, 2, 3, 4, 5};
int n = 5;
int target = 3;

void main() {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            return;
        }
    }
    printf("Element %d not found\n", target);
}