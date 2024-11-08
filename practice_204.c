//find the missing number
#include <stdio.h>

unsigned long long find_missing_number(unsigned long long M, unsigned long long A, unsigned long long B, unsigned long long C) {
    unsigned long long product_ABC = A * B * C;

    if (product_ABC == 0) {
        if (M == 0) {
            return 0;
        } 
        else {
            return -1;
        }
    } 
    else {
        if (M % product_ABC == 0) {
            return M / product_ABC;
        } 
        else {
            return -1;
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        unsigned long long M, A, B, C;
        scanf("%llu %llu %llu %llu", &M, &A, &B, &C);
        unsigned long long result = find_missing_number(M, A, B, C);
        printf("%llu\n", result);
    }
    
    return 0;
}
