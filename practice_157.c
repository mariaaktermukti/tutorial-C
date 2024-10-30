/*Dynamic array---> calloc*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for 3 integers and initialize to 0
    int *arr = (int *)calloc(3, sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print values to verify they are initialized to 0
    printf("Values in arr using calloc: %d, %d, %d\n", arr[0], arr[1], arr[2]);

    // Assign new values
    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 15;

    // Print updated values
    printf("Updated values in arr: %d, %d, %d\n", arr[0], arr[1], arr[2]);

    // Free the allocated memory
    free(arr);

    return 0;
}
