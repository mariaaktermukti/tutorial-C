#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        unsigned long long M, A, B, C;
        scanf("%llu %llu %llu %llu", &M, &A, &B, &C);
        
        unsigned long long product_ABC = A * B * C;

        if (product_ABC == 0) {
            if (M == 0) {
                printf("0\n");
            } 
            else {
                printf("-1\n");
            }
        }
         else {
            if (M % product_ABC == 0) {
                unsigned long long D = M / product_ABC;
                printf("%llu\n", D);
            } 
            else {
                printf("-1\n");
            }
        }
    }
    
    return 0;
}
