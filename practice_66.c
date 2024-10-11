#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N); 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j && i == N/2) {
                printf("X");
            }
            else if (i == j) {
                printf("\\");
            }
            else if (i + j == N - 1) {
                printf("/");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
