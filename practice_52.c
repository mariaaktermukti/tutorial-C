#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    scanf("%d", &N);
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        int value;
        scanf("%d", &value); 
        sum += value; 
    }
    printf("%lld\n", llabs(sum)); 
    return 0;
}
