#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
    for(int i=0;i<N;i++){
         if(A[i]==0){
            printf("0 ");
        }
        if(A[i]>0){
            printf("1 ");
        }
        if(A[i]<0){
            printf("2 ");
        }
       
    }
    return 0;
}