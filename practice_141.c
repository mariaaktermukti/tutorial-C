#include <stdio.h>

int main() {
    char S[1000001];      
    int count[26] = {0}; 
    if (scanf("%1000000s", S) != 1) {
        printf("Failed to read input\n");
        return 1;
    }

    for (int i = 0; S[i] != '\0'; i++) {
        count[S[i] - 'a']++; 
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) { 
            printf("%c : %d\n", i + 'a', count[i]); 
        }
    }

    return 0;
}
