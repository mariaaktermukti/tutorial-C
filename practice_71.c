#include <stdio.h>
int main() {
    int T; 
    scanf("%d", &T);
    while (T--) {
        long long n, s;
        scanf("%lld %lld", &n, &s);
        long long max_sum = (n * (n + 1)) / 2;
        if (s > max_sum) {
            printf("-1\n");
        } else {
            long long current_sum = 0;
            for (long long i = n; i >= 1; i--) {
                if (current_sum + i <= s) {
                    printf("%lld ", i);
                    current_sum += i;
                }
                if (current_sum == s) {
                    break; 
                }
            }
            printf("\n");
        }
    }
    return 0;
}
