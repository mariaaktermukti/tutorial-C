#include <stdio.h>

int add(int a, int b){
    int sum = a + b;
    return sum;
}

int main() {
   int result= add(10, 20);
   printf("%d", result);
    return 0;
}
