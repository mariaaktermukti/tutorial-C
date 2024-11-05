#include <stdio.h>
#include <stdbool.h>
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true; 
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) 
        return false;
    }

    return true;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long N;
        scanf("%lld", &N);
        if (isPrime(N)) {
            printf("YES\n");
        }
         else {
            printf("NO\n");
        }
    }

    return 0;
}
