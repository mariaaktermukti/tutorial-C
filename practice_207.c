#include <stdio.h>
#include <ctype.h>

// Recursive function to count vowels
int countVowels(char *s, int index) {
    if (s[index] == '\0') {
        // Base case: End of string
        return 0;
    }

    // Convert character to lowercase for easier comparison
    char ch = tolower(s[index]);
    int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? 1 : 0;

    // Recursive case: Move to next character and add 1 if current character is a vowel
    return isVowel + countVowels(s, index + 1);
}

int main() {
    char S[201];
    fgets(S, sizeof(S), stdin);  // Read the input string including spaces

    int result = countVowels(S, 0);  // Start recursion from the first character
    printf("%d\n", result);  // Print the result

    return 0;
}
