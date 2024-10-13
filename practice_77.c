#include <stdio.h>
int main() {
    int X,Y;
    long long int multiplication;  
    scanf("%d %d", &X, &Y);
    multiplication = (long long int)X * Y;

    printf("%d + %d = %d\n", X, Y, X + Y);
    printf("%d * %d = %lld\n", X, Y, multiplication);
    printf("%d - %d = %d\n",  X, Y, X - Y);
    
    return 0;
}
