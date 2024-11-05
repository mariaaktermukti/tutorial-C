#include <stdio.h>
int summation(int x, int y) {
    return x + y;
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    printf("%d\n", summation(X, Y));
    
    return 0;
}
