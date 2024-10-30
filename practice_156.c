/*Dynamic array---> malloc*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for 3 integers
    int *arr = (int *)malloc(3 * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values to the allocated memory
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // Print values to verify
    printf("Values in arr using malloc: %d, %d, %d\n", arr[0], arr[1], arr[2]);

    // Free the allocated memory
    free(arr);

    return 0;
}

