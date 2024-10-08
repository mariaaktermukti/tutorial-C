#include <stdio.h>
int main() {
    int N, original, reversed = 0, remainder;
    scanf("%d", &N);
    original = N;
    while (N != 0) {
        remainder = N % 10;  
        reversed = reversed * 10 + remainder; 
        N /= 10;  
    }
    printf("%d\n", reversed);
    if (original == reversed) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
