#include <stdio.h>
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int count[M];
    for (int i = 1; i <= M; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        int Ai;
        scanf("%d", &Ai);
        count[Ai]++;
    }
    for (int i = 1; i <= M; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}
