#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    if (N == 1) {
        printf("0\n");
        return 0;
    }
    int fib1 = 0, fib2 = 1;
    printf("%d %d", fib1, fib2); 

    for (int i = 3; i <= N; i++) {
        int fib_next = fib1 + fib2;
        printf(" %d", fib_next);  
        fib1 = fib2;
        fib2 = fib_next;
    }
    printf("\n");  
    
    return 0;
}
