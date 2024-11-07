#include <stdio.h>

void printBinary(int n) {
    // Array to store binary digits
    int binary[32];  // Since N <= 10^9, 32 bits are sufficient
    int index = 0;

    // Handle the case where n is zero directly
    if (n == 0) {
        printf("0");
        return;
    }

    // Convert decimal to binary by dividing by 2
    while (n > 0) {
        binary[index++] = n % 2;
        n = n / 2;
    }

    // Print the binary digits in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        printBinary(N);
        printf("\n");  // Move to the next line for each test case
    }

    return 0;
}
