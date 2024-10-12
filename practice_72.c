#include <stdio.h>
int main() {
    double X, P;
    scanf("%lf %lf", &X, &P);
    double discount_fraction = X / 100.0;
    double original_price = P / (1 - discount_fraction);
    printf("%.2lf\n", original_price);
    return 0;
}

