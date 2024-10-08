#include <stdio.h>
int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);
    int last_digit_N = N % 10;
    int last_digit_M = M % 10;
    printf("%d\n", last_digit_N + last_digit_M);

    return 0;
}
