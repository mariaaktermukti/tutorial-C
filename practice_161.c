#include <stdio.h>
int add(int x, int y) {
    return x + y;
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    printf("%d\n", add(X, Y));
    
    return 0;
}
