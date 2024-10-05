#include <stdio.h>

int main() {
    int n, a = 0, b = 1, nextTerm;
    scanf("%d", &n);
    if (n == 1) {
        printf("Fibonacci term %d: %d\n", n, a);
        return 0;
    } else if (n == 2) {
        printf("Fibonacci term %d: %d\n", n, b);
        return 0;
    }

    for (int i = 3; i <= n; i++) {
        nextTerm = a + b;  // Calculate next term in Fibonacci series
        a = b;  // Move a to the next position
        b = nextTerm;  // Update b to the next position
    }
    printf("Fibonacci term %d: %d\n", n, b);  // b holds the nth term after the loop

    return 0;
}
