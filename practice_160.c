#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortString(char *str) {
    int len = strlen(str);
    // Using bubble sort to sort the string characters
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Swap characters
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char S[10001]; // Input string (up to 10,000 characters)
    scanf("%s", S); // Read the input string

    int len = strlen(S);
    char minString[10001]; // To store the minimum string
    strcpy(minString, S); // Initialize with the original string

    // Iterate through possible split points
    for (int i = 1; i < len; i++) {
        // Split the string into two parts
        char X[10001];
        char Y[10001];
        
        strncpy(X, S, i); // Copy first part
        X[i] = '\0'; // Null-terminate X

        strncpy(Y, S + i, len - i); // Copy second part
        Y[len - i] = '\0'; // Null-terminate Y

        // Sort both parts
        sortString(X);
        sortString(Y);

        // Concatenate the sorted parts
        char combined[10001];
        sprintf(combined, "%s%s", X, Y); // Combine sorted X and Y

        // Update minString if a smaller combination is found
        if (strcmp(combined, minString) < 0) {
            strcpy(minString, combined);
        }
    }

    // Print the smallest string
    printf("%s\n", minString);
    return 0;
}
