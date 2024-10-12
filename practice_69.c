#include <stdio.h>
int main() {
    long long id; 
    scanf("%lld", &id); 
    long long row = id / 4;       
    long long column = id % 4;     
    column = (id % 4 == 0) ? 0 : (4 - column) % 4;
    printf("%lld %lld\n", row, column);

    return 0;
}




