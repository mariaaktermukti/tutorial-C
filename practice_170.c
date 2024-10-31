/*hacker rank*/
#include <stdio.h>

#define MAX_NUM 100000

int main() {
    int N;
    scanf("%d", &N); 

    int arr[N];
    int count[MAX_NUM + 1] = {0};

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]]++;  
    }

    int unique_count = 0;
    for (int i = 1; i <= MAX_NUM; i++) {
        if (count[i] == 1) {
            unique_count++; 
        }
    }

    printf("%d\n", unique_count); 

    return 0;
}
