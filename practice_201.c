//jadu matrix =--> primary diagonal and secondary diagonal always 1.
#include <stdio.h>
int isJaduMatrix(int N, int M, int matrix[N][M]){
    if(N!=M)
    return 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(i==j || i+j==N-1){
                if(matrix[i][j]!=1){
                    return 0;
                }
            }
            else{
                if(matrix[i][j]!=0){
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main(){
    int N,M;
    scanf("%d %d", &N,&M);
    int matrix[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    if(isJaduMatrix(N,M, matrix)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}