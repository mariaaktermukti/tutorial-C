#include <stdio.h>
int main() {
    int N; 
    scanf("%d", &N);

    int scores[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
    }
    int max_score = scores[0];
    int min_score = scores[0];
    int max_count = 0, min_count = 0;
    for (int i = 1; i < N; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
            max_count++;
        } else if (scores[i] < min_score) {
            min_score = scores[i];
            min_count++;
        }
    }
    printf("%d %d\n", max_count, min_count);

    return 0;
}
