#include <stdio.h>
int main() {
    float N;
    scanf("%f", &N);
    int intPart = (int)N;
    if (N == intPart) {
        printf("int %d\n", intPart);
    }
    else
     {
        float decimalPart = N - intPart;
        printf("float %d %.3f\n", intPart, decimalPart);
    }
    
    return 0;
}
