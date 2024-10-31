/*hacker rank*/
#include <stdio.h>

#define MAX_NUM 1000

int main() {
    int N, M, X;
    scanf("%d %d %d", &N, &M, &X);
    
    int matrix[N][M];
    int count[MAX_NUM + 1] = {0}; 
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
            count[matrix[i][j]]++; 
        }
    }
    
    for (int i = 0; i < X; i++) {
        int number;
        scanf("%d", &number);
        printf("%d\n", count[number]); 
    }

    return 0;
}
