/*Code force__ (string_F)*/
#include <stdio.h>
#include <string.h>
int main() {
    int T;
    scanf("%d", &T); 

    char S[101]; 
    for (int i = 0; i < T; i++) {
        scanf("%s", S);
        int len = strlen(S); 
        if (len <= 10) {
            printf("%s\n", S);
        } 
        else {
            printf("%c%d%c\n", S[0], len - 2, S[len - 1]);
        }
    }

    return 0;
}
