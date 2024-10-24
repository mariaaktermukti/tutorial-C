#include <stdio.h>
int main() {
    int N,X,Y;
    scanf("%d %d %d", &N, &X, &Y);

    int prices[N];
    for(int i=1;i<=N;i++){
        scanf("%d", &prices[i]);
    }
    
    int count=0;
    for(int i=1;i<=N;i++){
        if(prices[i] >= X && prices[i] <=Y){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
