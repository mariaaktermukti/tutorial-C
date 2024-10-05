#include<stdio.h>
int main(){
    int marks;
    scanf("%d", &marks);

    if(marks >= 80 && marks<=100){
        printf("You have got A+ Grade\n");
    }
    if(marks >=70 && marks<=79){
        printf("You have got A Grade\n");
    }
     if(marks >=60 && marks<=69){
        printf("You have got A- Grade\n");
    }
    if(marks >=50 && marks<=59){
        printf("You have got B Grade\n");
    }
     if(marks >=40 && marks<=49){
        printf("You have got C Grade\n");
    }
     if(marks >=33 && marks<=39){
        printf("You have got D Grade\n");
    }
     if(marks >= 0 && marks < 33){
        printf("You have got F Grade\n");
    }
    if(marks <0 || marks > 100){
        printf("Invalid marks\n");
    }
    return 0;
}