/*Dynamic array---> realloc*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initially allocate memory for 2 integers
    int *arr = (int *)malloc(2 * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values to the allocated memory
    arr[0] = 1;
    arr[1] = 2;

    // Resize the memory to hold 4 integers
    arr = (int *)realloc(arr, 4 * sizeof(int));

    // Check if reallocation was successful
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Assign values to the new elements
    arr[2] = 3;
    arr[3] = 4;

    // Print all values to verify
    printf("Values in arr after realloc: %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3]);

    // Free the allocated memory
    free(arr);

    return 0;
}
