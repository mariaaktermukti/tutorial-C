#include <stdio.h>
int main() {
    unsigned int A, B;
    scanf("%u %u", &A, &B);
    unsigned int result = A ^ B;
    printf("%u\n", result);
    
    return 0;
}
