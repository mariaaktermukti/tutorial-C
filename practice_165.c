#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to check if X is present in sorted array A using binary search
const char* binary_search(int *arr, int size, int x) {
    int *item = (int *)bsearch(&x, arr, size, sizeof(int), compare);
    return (item != NULL) ? "found" : "not found";
}

int main() {
    int N, Q;

    // Read N (size of array) and Q (number of queries)
    scanf("%d %d", &N, &Q);

    // Allocate memory for array A
    int *A = (int *)malloc(N * sizeof(int));
    if (A == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Read elements of array A
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Sort array A to enable binary search
    qsort(A, N, sizeof(int), compare);

    // Process each query
    for (int i = 0; i < Q; i++) {
        int X;
        scanf("%d", &X);
        printf("%s\n", binary_search(A, N, X));
    }

    // Free allocated memory
    free(A);

    return 0;
}
