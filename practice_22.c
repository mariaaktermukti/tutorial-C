#include<stdio.h>
int main(){

    for(int i=1;i<=7;i++){
        // printf("%d\n",1);
        for(int j=i;j>=1;j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}