#include <stdio.h>

int recursive_sum(int arr[], int n) {
    // Base case: if there are no elements, the sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: sum the last element with the result of the rest
    return arr[n - 1] + recursive_sum(arr, n - 1);
}

int main() {
    int N;
    // Read the size of the array
    scanf("%d", &N);
    
    int A[N];
    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    // Call the recursive function and print the result
    int result = recursive_sum(A, N);
    printf("%d\n", result);

    return 0;
}
