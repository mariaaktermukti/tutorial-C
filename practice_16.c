#include <stdio.h>
int main() {
    int X, first_digit;
    scanf("%d", &X); 
    first_digit = X / 1000;

    if (first_digit % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}
