#include<stdio.h>
#include<math.h> 

int checkPrime(int num) {
    if (num <= 1) {
        return 0;  
    }
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}
int main() {
    int num;

    printf("Enter a number for checking prime: ");
    scanf("%d", &num);

    if (checkPrime(num)) {
        printf("%d is a prime number.\n", num);
    } 
    else {
        printf("%d is not a prime number.\n", num);
    }
 
    return 0;
}
