#include <stdio.h>
void printDigits(int n) {
    if (n < 10) {
        printf("%d", n);
        return;
    }
    printDigits(n / 10);
    printf(" %d", n % 10);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        printDigits(N);
        printf("\n"); 
    }
    
    return 0;
}
