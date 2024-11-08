//phitron final exam 
#include <stdio.h>
void print_ascending(int current, int N){
    if(current>N)
    return;
printf("%d ", current);
print_ascending(current+1, N);
}
void print_descending(int current){
    if(current<1)
    return;
printf("%d ", current);
print_descending(current-1);
}

void print_pattern(int N){
    print_ascending(1,N);
    print_descending(N-1);
    printf("\n");
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int N;
        scanf("%d", &N);
        print_pattern(N);
    }
    return 0;
}
