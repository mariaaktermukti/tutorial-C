#include <stdio.h>

void printNumbers(int n, int N) {
    if (n > N) {
        return;
    }
    printf("%d\n", n);
    printNumbers(n + 1, N);
}

int main() {
    int N;
    scanf("%d", &N);
    printNumbers(1, N);
    
    return 0;
}
