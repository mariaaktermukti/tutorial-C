/*Finding Perfect number. Perfect number means=> [sum of all factors== number *2]*/
#include<stdio.h>
int CheckPerfect(int num);  
int main() {
    int num;
    printf("Enter a number for checking Perfect: ");
    scanf("%d", &num);
    if (CheckPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } 
    else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

int CheckPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) { 
            sum += i;
        }
    }
    return (sum == num);
}
