/*Code force__ (string_G)*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char S[100001]; 
    scanf("%s", S); 

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] == ',') {
            S[i] = ' '; 
        }
         else if (islower(S[i])) {
            S[i] = toupper(S[i]); 
        } 
        else if (isupper(S[i])) {
            S[i] = tolower(S[i]);
        }
    }

    printf("%s\n", S); 
    return 0;
}
