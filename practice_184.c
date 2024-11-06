#include <stdio.h>
#include <stdbool.h>
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int countPrimes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}
bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return original == reversed;
}
int countPalindromes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }
    return count;
}
int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}
int getMaxDivisorsNumber(int arr[], int n) {
    int maxDivisors = 0, result = 0;
    for (int i = 0; i < n; i++) {
        int divisors = countDivisors(arr[i]);
        if (divisors > maxDivisors || (divisors == maxDivisors && arr[i] > result)) {
            maxDivisors = divisors;
            result = arr[i];
        }
    }
    return result;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The maximum number : %d\n", getMax(arr, N));
    printf("The minimum number : %d\n", getMin(arr, N));
    printf("The number of prime numbers : %d\n", countPrimes(arr, N));
    printf("The number of palindrome numbers : %d\n", countPalindromes(arr, N));
    printf("The number that has the maximum number of divisors : %d\n", getMaxDivisorsNumber(arr, N));

    return 0;
}
