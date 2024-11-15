#include <stdio.h>
int main() {
    int N,evenSum=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(i%2==0){
            evenSum+=i;
        }
    }
    printf("%d\n",evenSum);
    return 0;
}
