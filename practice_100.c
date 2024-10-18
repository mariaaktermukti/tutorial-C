#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    if (N == 1) {
        printf("0\n");
        return 0;
    } 
    else if (N == 2) {
        printf("1\n");
        return 0;
    }
    long long fib1 = 0, fib2 = 1, fibN;
    for (int i = 3; i <= N; i++) {
        fibN = fib1 + fib2;  
        fib1 = fib2;         
        fib2 = fibN;     
    }
    printf("%lld\n", fibN); 
    return 0;
}
