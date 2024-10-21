/*Finding cube in function*/
#include<stdio.h>
double cube(int num);
int main(){
    int num;
    printf("Enter the number to find cube :");
    scanf("%d", &num);
    printf("Cube of %d is =%lf", num, cube(num));
    return 0;
}

double cube(int num){
   return num*num*num;
}