#include<stdio.h>
int main(){
    int arr[3][5];
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("i = %d, j=  %d, address = %d ||", i, j, &arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}