#include<Stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int fact=1;
    for(int i=1;i<=N;i++){
     fact=fact*i;
    }
    printf("%d\n", fact);
    return 0;
}