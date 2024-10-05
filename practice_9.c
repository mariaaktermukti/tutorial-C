#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    if(n %2 ==0){
        printf("Even\n");
         if(n>0){
            printf("Positive\n");
         }
         else{
            printf("Negative\n");
         }
    }
    else{
        printf("Odd\n");
          if(n>0){
            printf("Positive\n");
         }
         else{
            printf("Negative\n");
         }
    }
}