#include <stdio.h>
#include <limits.h>
int main() {
    int N, K;
    scanf("%d %d", &N, &K); 
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); 
    }
    for (int i = 0; i < N; i += K) {
        int min_value = INT_MAX;  
        for (int j = i; j < i + K && j < N; j++) {
            if (A[j] < min_value) {
                min_value = A[j];
            }
        }
        printf("%d ", min_value);
    }
    printf("\n");
    return 0;
}
