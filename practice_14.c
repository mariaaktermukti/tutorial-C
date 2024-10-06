#include <stdio.h>

int main() {
    long long N, sum;
    scanf("%lld", &N);
    sum = (N * (N + 1)) / 2;
    printf("%lld\n", sum);

    return 0;
}
