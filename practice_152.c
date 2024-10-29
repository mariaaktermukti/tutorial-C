#include <stdio.h>
int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);
    
    long long A[N + 1]; 
    long long prefix_sum[N + 1]; 
    prefix_sum[0] = 0;
    
    for (int i = 1; i <= N; i++) {
        scanf("%lld", &A[i]);
        prefix_sum[i] = prefix_sum[i - 1] + A[i];
    }

    for (int i = 0; i < Q; i++) {
        int L, R;
        scanf("%d %d", &L, &R);
        long long result = prefix_sum[R] - prefix_sum[L - 1];
        printf("%lld\n", result);
    }
    
    return 0;
}
