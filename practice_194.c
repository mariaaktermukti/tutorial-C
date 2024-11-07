/*recursion starts*/
#include <stdio.h>
void printMessage(int n) {
    if (n == 0) {
        return;
    }
    printf("I love Recursion\n");
    printMessage(n - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    
    printMessage(N);
    
    return 0;
}
