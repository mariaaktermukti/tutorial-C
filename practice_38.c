#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int hasEven = 0; 
    for (int i = 2; i <= N; i += 2) { 
        printf("%d\n", i);
        hasEven = 1; 
    }
    if (hasEven == 0) {
        printf("-1\n");
    }

    return 0;
}
