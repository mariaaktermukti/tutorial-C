#include <stdio.h>

// Function to calculate X raised to the power of exp without using built-in functions
int power(int X, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= X;
    }
    return result;
}

// Function to calculate the sum S as specified
int calculateSum(int X, int N) {
    int sum = 0;
    for (int i = 0; i <= N; i += 2) {
        if (i == 0) {
            sum += (power(X, i) - 1); // X^0 - 1
        } else {
            sum += power(X, i);       // X^2, X^4, ..., X^N
        }
    }
    return sum;
}

int main() {
    int X, N;
    scanf("%d %d", &X, &N);
    
    int result = calculateSum(X, N);
    printf("%d\n", result);

    return 0;
}
