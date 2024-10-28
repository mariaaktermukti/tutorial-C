#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int a[n+5][m+5];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    a[2][3]=100;
    a[3][4]=200;

      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}