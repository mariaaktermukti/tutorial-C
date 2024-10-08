#include <stdio.h>
int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if (
        a + b + c == d ||
        a + b - c == d ||
        a + b * c == d ||
        a - b + c == d ||
        a - b - c == d ||
        a - b * c == d ||
        a * b + c == d ||
        a * b - c == d ||
        a * b * c == d ||
        b + a + c == d ||
        b + a - c == d ||
        b + a * c == d ||
        b - a + c == d ||
        b - a - c == d ||
        b - a * c == d ||
        b * a + c == d ||
        b * a - c == d ||
        b * a * c == d ||
        c + a + b == d ||
        c + a - b == d ||
        c + a * b == d ||
        c - a + b == d ||
        c - a - b == d ||
        c - a * b == d ||
        c * a + b == d ||
        c * a - b == d ||
        c * a * b == d ||
        (a + b) * c == d ||
        (a - b) * c == d ||
        (a * b) + c == d ||
        (a + c) * b == d ||
        (a - c) * b == d ||
        (a * c) + b == d ||
        (b + c) * a == d ||
        (b - c) * a == d ||
        (b * c) + a == d
    ) {
        printf("YES\n");
    }
     else {
        printf("NO\n");
    }

    return 0;
}
