#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int current_num;  
    int max_num;  
    scanf("%d", &max_num);

    for (int i = 1; i < N; i++) {
        scanf("%d", &current_num);

        if (current_num > max_num) {
            max_num = current_num;
        }
    }
    printf("%d\n", max_num);
    
    return 0;
}
