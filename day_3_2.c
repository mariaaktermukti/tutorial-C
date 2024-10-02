#include<stdio.h>
int main(){
    printf("Before while loop\n:");
    int i=1;
    while(i<=5){
        printf("Inside while loop i =%d\n", i);
        i++;
    }
    printf("After while loop\n");
}