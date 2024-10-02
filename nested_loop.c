#include<Stdio.h>
int main(){
    
    for(int i=1;i<=3;i++){
        for(int j=1;j<=5;j++){
            printf("%d hour %d minute\n", i, j);
        }
        printf("\n");
    }
    return 0;
}