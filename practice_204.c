#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        unsigned long long M, A, B, C;
        scanf("%llu %llu %llu %llu", &M, &A, &B, &C);
        
        unsigned long long product_ABC = A * B * C;
        
        // Check if product_ABC is zero
        if (product_ABC == 0) {
            // If M is also zero, the missing number D can be considered as 0
            if (M == 0) {
                printf("0\n");
            } else {
                // Otherwise, no valid missing number can satisfy the equation
                printf("-1\n");
            }
        } else {
            // Check if M is divisible by product_ABC
            if (M % product_ABC == 0) {
                unsigned long long D = M / product_ABC;
                printf("%llu\n", D);
            } else {
                printf("-1\n");
            }
        }
    }
    
    return 0;
}
