#include <stdio.h>

int main() {
    char S[1000001];      
    int count[26] = {0};  
    scanf("%1000000s", S);
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            count[S[i] - 'a']++;  
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) { 
            printf("%c : %d\n", i + 'a', count[i]); 
        }
    }

    return 0;
}
