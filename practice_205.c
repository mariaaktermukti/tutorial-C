#include <stdio.h>
void printEvenIndicesReverse(int A[], int index) {
    if (index < 0) {
        return; 
    }
    if (index % 2 == 0) {
        printf("%d ", A[index]);
    }
    printEvenIndicesReverse(A, index - 1);
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    printEvenIndicesReverse(A, N - 1);

    return 0;
}
