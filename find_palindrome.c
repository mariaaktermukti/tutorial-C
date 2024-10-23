#include<stdio.h>
int checkPalindrome(int num);  


int main() {
    int num;
    printf("Enter a number for checking palindrome: ");
    scanf("%d", &num);
    
    if(checkPalindrome(num)) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }
    return 0;
}

int checkPalindrome(int num) {
    int original = num;  
    int reversed = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if (original == reversed) {
        return 1;  
    } 
    else {
        return 0;  
    }
}
