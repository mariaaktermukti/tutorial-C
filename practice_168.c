/*HackerRank*/
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int matrix[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) { 
                if (matrix[i][j] != 1) {
                    printf("NO\n");
                    return 0;
                }
            } else { 
                if (matrix[i][j] != 0) {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }

    printf("YES\n");
    return 0;
}
