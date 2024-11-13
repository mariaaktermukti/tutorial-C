#include <stdio.h>
void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int N;
    scanf("%d", &N);

    printPyramid(N); 
    return 0;
}
