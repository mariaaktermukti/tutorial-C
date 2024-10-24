#include <stdio.h>
int main() {
    int N,T;
    scanf("%d %d", &N, &T);
    int times[N];
    for(int i=1;i<=N;i++){
        scanf("%d", &times[i]);
    }
     int total_time=0;
     int count=0;
    
    
    for(int i=1;i<=N;i++){
    if(total_time+ times[i]<= T){
        total_time=total_time+times[i];
        count++;
    }
    else{
        break;
    }
   }
    printf("%d\n", count);
    return 0;
}
