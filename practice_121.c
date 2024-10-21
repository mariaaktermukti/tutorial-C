/*finding max min between two numbers*/
#include<stdio.h>
int min(int num1, int num2);
int max(int num1, int num2);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d\n", max(num1, num2));
    printf("Minimum = %d\n", min(num1, num2));

    return 0;
}

int max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } 
    else {
        return num2;
    }
}

int min(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    }
     else {
        return num2;
    }
}
