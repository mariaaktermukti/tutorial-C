#include <stdio.h>
void concatenateArrays(int A[], int B[], int C[], int N) {
    for (int i = 0; i < N; i++) {
        C[i] = B[i];
    }
    for (int i = 0; i < N; i++) {
        C[N + i] = A[i];
    }
}
int main() {
    int N;
    scanf("%d", &N);  
    int A[N], B[N], C[2 * N]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }
    
    concatenateArrays(A, B, C, N);
    for (int i = 0; i < 2 * N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    
    return 0;
}
