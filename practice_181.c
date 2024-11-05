#include <stdio.h>
#include <stdbool.h>
bool isOdd(int n) {
    return n % 2 != 0;
}
bool isBinaryPalindrome(int n) {
    int binary[32];
    int index = 0;
    
    while (n > 0) {
        binary[index++] = n % 2;
        n /= 2;
    }
    
    for (int i = 0; i < index / 2; i++) {
        if (binary[i] != binary[index - i - 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (isOdd(N) && isBinaryPalindrome(N)) {
        printf("YES\n");
    }
     else {
        printf("NO\n");
    }
    
    return 0;
}
