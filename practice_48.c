#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    // printf("%d", a[i]);
    for(int i=0;i<5;i++){
        a[i]=a[i]+5;
    }
    for(int i=0;i<5;i++){
        printf("%d ", a[i]);
    }
    return 0;
}