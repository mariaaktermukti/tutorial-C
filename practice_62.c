#include <stdio.h>
#include <stdlib.h>  
int main() {
    int N;
    scanf("%d", &N);  
    int matrix[N][N];  
    int primary_sum = 0, secondary_sum = 0;  
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);  
            if (i == j) {
                primary_sum += matrix[i][j];
            }
            if (i == N - j - 1) {
                secondary_sum += matrix[i][j];
            }
        }
    }
    int result = abs(primary_sum - secondary_sum);
    printf("%d\n", result);
    return 0;
}
