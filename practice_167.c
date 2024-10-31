#include <stdio.h>

int findMinResult(int A[], int N) {
    int minAiMinusI = A[0] - 0; // A[i] - i for the first element
    int minResult = 2147483647; // Initialize with a large number

    for (int j = 1; j < N; j++) {
        // Calculate the current result for (i, j) pair
        int currentResult = minAiMinusI + A[j] + j;
        
        // Update the minimum result
        if (currentResult < minResult) {
            minResult = currentResult;
        }
        
        // Update minAiMinusI for the next iteration
        int AiMinusI = A[j] - j;
        if (AiMinusI < minAiMinusI) {
            minAiMinusI = AiMinusI;
        }
    }
    
    return minResult;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        // Calculate and print the minimum possible result
        printf("%d\n", findMinResult(A, N));
    }

    return 0;
}
