#include <stdio.h>
int main() {
    int N, M, X, Y;
    scanf("%d %d", &N, &M);
    char A[N][M];
    
    for (int i = 0; i < N; i++) {
        scanf("%s", A[i]);
    }
    
    scanf("%d %d", &X, &Y);
    X--; 
    Y--;  

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    for (int i = 0; i < 8; i++) {
        int nx = X + dx[i];
        int ny = Y + dy[i];
        
        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (A[nx][ny] != 'x') {
                printf("no\n");
                return 0;
            }
        }
    }
    
    printf("yes\n");
    return 0;
}
