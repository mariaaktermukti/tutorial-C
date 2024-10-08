#include <stdio.h>
int main() {
    int A, B;
    char operator;
    scanf("%d%c%d", &A, &operator, &B);
    if (operator == '+') {
        printf("%d\n", A + B);
    } else if (operator == '-') {
        printf("%d\n", A - B);
    } else if (operator == '*') {
        printf("%d\n", A * B);
    } else if (operator == '/') {
        printf("%d\n", A / B); 
    }

    return 0;
}
