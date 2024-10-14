#include <stdio.h>
int main() {
    int N, X;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &X);
    X = X - 1;
    if (arr[X] == 0) {
        arr[X] = 1;
    } 
    else {
        arr[X] = 0;
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
