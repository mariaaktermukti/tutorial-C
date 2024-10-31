#include <stdio.h>
#include <stdlib.h>

#define MAX 1000001
int hashSet[MAX];
int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);
    for (int i = 0; i < MAX; i++) {
        hashSet[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        hashSet[num] = 1;  
    }
    
    for (int i = 0; i < Q; i++) {
        int X;
        scanf("%d", &X);
        if (hashSet[X]) {
            printf("found\n");
        } 
        else {
            printf("not found\n");
        }
    }

    return 0;
}
