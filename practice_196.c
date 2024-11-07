#include <stdio.h>

void printNumbers(int n) {
    if (n < 1) {
        return;
    }
    printf("%d", n);
    if (n > 1) {
        printf(" ");
        printNumbers(n - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printNumbers(N);
    
    return 0;
}
