/*Fall 23(Set_A)--> Q2*/

#include <stdio.h>
int prime_checker(int x) {
    if (x <= 1) return 0; 
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int is_even_sum_greater(int num, int evenSum, int oddSum) {
    if (num == 0) {
        return (evenSum > oddSum) ? 1 : 0;
    }
    int digit = num % 10; 
    if (digit % 2 == 0) {
        evenSum += digit;
    } else {
        oddSum += digit; 
    }
    return is_even_sum_greater(num / 10, evenSum, oddSum);
}

int even_powered_number(int x) {
    if (is_even_sum_greater(x, 0, 0) && prime_checker(x)) {
        return 1; 
    }
    return 0;
}

void find_even_powered_prime_number(int start, int end) {
    printf("Even Powered Prime Numbers in the range [%d, %d]:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (even_powered_number(i)) {
            printf("%d\n", i); 
        }
    }
}

int main() {
    int start, end;

    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    find_even_powered_prime_number(start, end);
    
    return 0;
}
