#include <stdio.h>
int main() {
    double X, P;
    scanf("%lf %lf", &X, &P);
    if (X == 100.0) {
        printf("Undefined\n");
        return 0;
    }
    double original_price = P / (1 - X / 100.0);
    printf("%.2lf\n", original_price);
    
    return 0;
}
