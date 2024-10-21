#include <stdio.h>
int main() {
    int T; 
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int ones_count = 0;
        while (N > 0) {
            if (N % 2 == 1) {
                ones_count++;  
            }
            N /= 2;  
        }
        int result = (1 << ones_count) - 1; 
        printf("%d\n", result);
    }

    return 0;
}
