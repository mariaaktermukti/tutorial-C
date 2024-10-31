#include <stdio.h>

void calculate_absolute_difference(int *a, int *b, int *result) {
    if (*a > *b) {
        *result = *a - *b;
    } 
    else {
        *result = *b - *a;
    }
}

int main() {
    int A, B, difference;
    scanf("%d %d", &A, &B);
    calculate_absolute_difference(&A, &B, &difference);
    printf("%d\n", difference);

    return 0;
}
