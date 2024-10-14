#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int count_zero = 0;
    int count_one = 0;
    for (int i = 1; i <= N; i++) {
        int num;
        scanf("%d", &num);
        if (num == 0) {
            count_zero++;
        }
         else if (num == 1) {
            count_one++;
        }
    }
    printf("%d %d\n", count_zero, count_one);
    return 0;
}
