#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int k=1;
    for(int i=1;i<=N;i++,k+=2){
        int space= N-i;
        while(space--){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
    }
    k-=2;
    for(int i=N;i>=1;i--,k=k-2){
        int space= N-i;
        while(space--){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}