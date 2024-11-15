#include <stdio.h>
#include <string.h>
int main() {
    char S[1001];
    scanf("%s", S);
    int freq[26] = {0};
    for (int i = 0; S[i] != '\0'; i++) {
        freq[S[i] - 'a']++;
    }

    int odd_count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            odd_count++;
        }
    }
    int operations = (odd_count > 1) ? (odd_count - 1) : 0;
    printf("%d\n", operations);

    return 0;
}
