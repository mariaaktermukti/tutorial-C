#include <stdio.h>
void printCharacter(int n, char c) {
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" "); 
        }
        printf("%c", c);
    }
    printf("\n"); 
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        char C;
        scanf("%d %c", &N, &C);
        printCharacter(N, C);
    }

    return 0;
}
