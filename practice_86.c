#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int salami_amounts[N];
    int max_salami = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &salami_amounts[i]);
        if (salami_amounts[i] > max_salami) {
            max_salami = salami_amounts[i];
        }
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d ", max_salami - salami_amounts[i]);
    }

    return 0;
}
