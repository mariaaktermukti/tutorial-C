/*odd even by function*/
#include<stdio.h>
void checkOddEven(int num);  

int main() {
    int num;
    printf("Enter a number for checking odd or even: ");
    scanf("%d", &num);
    checkOddEven(num); 
    
    return 0;
}
void checkOddEven(int num) {
    if (num % 2 == 0) {
        printf("%d is even\n", num);  
    } 
    else {
        printf("%d is odd\n", num);  
    }
}
