#include <stdio.h>
#include<stdlib.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a + b > 0 && abs(a - b) <= 1) {
        printf("YES\n");
    } 
    else {
        printf("NO\n");
    }
    return 0;
}
