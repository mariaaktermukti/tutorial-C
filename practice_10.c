#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);

 /*finding min*/
 if(B>A && C>A){
    printf("%d ", A);
 }
  else if(A>B && C>B){
    printf("%d ", B);
 }
 else if(B>C && A>C){
    printf("%d ", C);
 }
 printf(" ");
  /*finding max*/
    if(A>B && A>C){
        printf("%d ", A);
    }
    else if(B>A && B>C){
        printf("%d ", B);
    }
    else if(C>A && C>B){
        printf("%d ", C);
    }

    return 0;
}