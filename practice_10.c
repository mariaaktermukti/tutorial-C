#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    /*finding max*/
    if(a>b && a>c){
        printf("Max = %d", a);
    }
    else if(b>a && b>c){
        printf("Max = %d", b);
    }
    else if(c>a && c>b){
        printf("Max = %d", c);
    }
 printf(" ");

 /*finding min*/

 if(b>a && c>a){
    printf("Min = %d", a);
 }
  else if(a>b && c>b){
    printf("Min = %d", b);
 }
 else if(b>c && a>c){
    printf("Min = %d", c);
 }
    return 0;
}