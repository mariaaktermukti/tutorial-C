#include <stdio.h>
#include <math.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 2; i <= N; i++) {
        int is_prime = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
