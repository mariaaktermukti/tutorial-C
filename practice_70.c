#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char N_str[105];
    scanf("%s", N_str);
    unsigned long long N = 0;
    for (int i = 0; N_str[i] != '\0'; i++) {
        N = (N * 10 + (N_str[i] - '0')) % 1000000007; 
    }
    for (unsigned long long X = 0; X <= 1000000000; X++) {
        unsigned long long X2 = (X * X) % N;
        for (unsigned long long Y = 0; Y <= 1000000000; Y++) {
            unsigned long long Y2 = (Y * Y) % N;
            if ((X2 + Y2) % N == 0) {
                printf("%llu %llu\n", X, Y);
                return 0;
            }
        }
    }
    printf("No solutions\n");
    return 0;
}


