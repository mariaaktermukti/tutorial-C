#include <stdio.h>
int main() {
    double R; 
    const double PI = 3.141592653; 
    if (scanf("%lf", &R) != 1) {
        printf("Invalid input\n");
        return 1; 
    }
    double area = PI * R * R;

    printf("%.9lf\n", area);

    return 0;
}
