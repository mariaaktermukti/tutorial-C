/*Ques 1*/
#include<stdio.h>
int main(){
    int X,Y,Z;
    scanf("%d %d %d", &X, &Y, &Z);
    printf("%d", X+Y+Z);
    return 0;
}

/*Ques 2*/
#include<stdio.h>
int main(){
 long long int A,B;
 scanf("%lld %lld", &A, &B);
//  long long int result= A*B;
 printf("%lld", A*B);
 return 0; 
}

/*Ques 3 */
#include<stdio.h>
int main(){
    int M;
    scanf("%d", &M);
    if(M>=1000){
        printf("Three Kacchi\n");
    }
    else if(M>=500){
        printf("One Large Pizza\n");
    }
    else if(M>=250){
        printf("Three Small Burger\n");
    }
    else if(M>=100){
        printf("Three Fuchka\n");
    }
    else{
        printf("Nothing\n");
    }
    return 0;
}

/*Ques 4*/
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int div_by_3;
    int div_by_5;
    for(int i=1;i<=N;i++){
        div_by_3=(i % 3 == 0);
        div_by_5=(i % 5 == 0);
     
     if(div_by_3 || div_by_5){
            printf("%d Yes\n", i);
        }
        else{
            printf("%d No\n", i);
        }
    }
    return 0;
}