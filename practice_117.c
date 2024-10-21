/*PUM game */
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N); 

    int current_number = 1; 
    for (int i = 0; i < N; i++) {
        printf("%d %d %d PUM\n", current_number, current_number + 1, current_number + 2);
        current_number += 4;  
    }

    return 0;
}
