#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool areAnagrams(char *S, char *T) {
    int freq[26] = {0}; 
    for (int i = 0; S[i] != '\0'; i++) {
        freq[S[i] - 'a']++;
    }
    for (int i = 0; T[i] != '\0'; i++) {
        freq[T[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char S[1001], T[1001];
    scanf("%s", S);
    scanf("%s", T);

    if (strlen(S) != strlen(T)) {
        printf("NO\n");
        return 0;
    }

    if (areAnagrams(S, T)) {
        printf("YES\n");
    } 
    else {
        printf("NO\n");
    }

    return 0;
}
