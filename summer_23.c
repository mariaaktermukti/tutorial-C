#include <stdio.h>
int is_palindrome(int x) {
    int original = x;
    int reversed = 0;

    while (x > 0) {
        int digit = x % 10;  
        reversed = reversed * 10 + digit;  
        x /= 10; 
    }   
    if (original == reversed) {
        return 1; 
    } 
    else {
        return 0; 
    } 
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;  
    } else if (n == 1) {
        return 1;  
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  
    }
}

int is_fibonacci_palindrome(int x) {
    int n = 0;
    int fib_num = 0; 
   
    while ((fib_num = fibonacci(n)) <= x) {
        if (fib_num == x && is_palindrome(fib_num)) {
            return 1;  
        }
        n++;  
    }
    
    return 0;  
}
void find_superhero_fibonacci_palindromes(int start, int end) {
    int found = 0; 
    printf("Fibonacci palindrome numbers within the range %d to %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (is_fibonacci_palindrome(i)) {
            printf("%d\n", i);  
            found = 1;  
        }
    }
    if (!found) {
        printf("No Fibonacci palindromes found in the given range.\n");
    }
}

int main() {
    int start, end;

    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    find_superhero_fibonacci_palindromes(start, end);
    
    return 0;
}  
