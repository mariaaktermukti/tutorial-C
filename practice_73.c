#include <stdio.h>
#include <limits.h>
int main() {
    long long n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);
    if (k == 0) {
        printf("int\n");
        return 0;
    }
    long long maxLongLong = LLONG_MAX;
    long long k_power_a = (k == 1) ? 1 : 1;
    for (long long i = 0; i < a; i++) {
        if (k_power_a > maxLongLong / k) {
            printf("double\n");
            return 0;
        }
        k_power_a *= k;
    }

    if (k_power_a > maxLongLong / n) {
        printf("long long\n");
    }
     else if (n * k_power_a > INT_MAX) {
        printf("long long\n");
    } else {
        printf("int\n");
    }

    return 0;
}
