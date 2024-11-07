#include <stdio.h>

void printBinary(int n) {
    if (n == 0) {
        return;
    }
    printBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        
        if (N == 0) {
            printf("0");  
        } else {
            printBinary(N);
        }
        
        printf("\n");  
    }
    
    return 0;
}
