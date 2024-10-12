#include <stdio.h>
int main() {
    double R;
    scanf("%lf", &R);
    const double PI = 3.141592653;
    double area = PI * R * R;
    printf("%.9lf\n", area);

    return 0;
}
