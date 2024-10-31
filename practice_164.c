#include <stdio.h>
#include <stdlib.h>  
int main() {
    int N;
    long long absoluteSum = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        absoluteSum += abs(num); 
    }
    printf("%lld\n", absoluteSum);
    
    return 0;
}
