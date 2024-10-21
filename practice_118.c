#include <stdio.h>
int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B); 
    int total_sum = 0;
    for (int i = 1; i <= N; i++) {
        int digit_sum = 0; 
        int number = i; 
        while (number > 0) {
            digit_sum += number % 10; 
            number /= 10;             
        }
        if (digit_sum >= A && digit_sum <= B) {
            total_sum += i;
        }
    }

    printf("%d\n", total_sum); 
    return 0;
}
