#include <stdio.h>
#include <math.h>
int main() {
    int X, isPrime = 1; 
    scanf("%d", &X);
    if (X == 2) {
        printf("YES\n");
        return 0;
    }
    for (int i = 2; i <= sqrt(X); i++) {
        if (X % i == 0) {
            isPrime = 0; 
            break;
        }
    }
    if (isPrime)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
