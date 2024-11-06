#include <stdio.h>
void rightShiftArray(int A[], int N, int X) {
    X = X % N;
    int temp[N];
    for (int i = 0; i < X; i++) {
        temp[i] = A[N - X + i];
    }
    for (int i = 0; i < N - X; i++) {
        temp[X + i] = A[i];
    }
    for (int i = 0; i < N; i++) {
        A[i] = temp[i];
    }
}

int main() {
    int N, X;
    scanf("%d %d", &N, &X);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    rightShiftArray(A, N, X);
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}
