#include <stdio.h>

// Function to shift the array to the right X times
void rightShiftArray(int A[], int N, int X) {
    // Reduce X to be within the bounds of N
    X = X % N;
    
    // Create a temporary array to store the shifted result
    int temp[N];
    
    // Copy the last X elements into the beginning of the array
    for (int i = 0; i < X; i++) {
        temp[i] = A[N - X + i];
    }
    
    // Copy the first N-X elements after the X elements in the temporary array
    for (int i = 0; i < N - X; i++) {
        temp[X + i] = A[i];
    }
    
    // Copy the result from temp back to the original array A
    for (int i = 0; i < N; i++) {
        A[i] = temp[i];
    }
}

int main() {
    int N, X;
    
    // Read the size of the array and number of shifts
    scanf("%d %d", &N, &X);
    
    int A[N];
    
    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    // Call the function to shift the array
    rightShiftArray(A, N, X);
    
    // Print the shifted array
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}
