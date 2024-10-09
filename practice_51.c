#include <stdio.h>
int main() {
    double X,P;
    scanf("%lf %lf", &X, &P);
    double original_price= P/(1-X /100);
    printf("%.2lf\n", original_price);
    return 0;
}
