/*Code force__ (string_H)*/
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); 
    char S[100001]; 
    for (int t = 0; t < T; t++) {
        scanf("%s", S); 
        
        if (strstr(S, "010") != NULL || strstr(S, "101") != NULL) {
            printf("Good\n");
        }
         else {
            printf("Bad\n");
        }
    }

    return 0;
}
