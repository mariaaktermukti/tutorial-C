#include <stdio.h>

int findMax(int A[], int index, int N) {
    if (index == N - 1) {
        // Base case: if it's the last element, return it as max
        return A[index];
    }
    
    // Recursive case: find the max in the rest of the array
    int maxInRest = findMax(A, index + 1, N);
    
    // Compare current element with the maximum of the rest of the array
    return (A[index] > maxInRest) ? A[index] : maxInRest;
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int max = findMax(A, 0, N);
    printf("%d\n", max);

    return 0;
}
