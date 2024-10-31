#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to compare two characters (used in qsort)
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b;
}

int main() {
    char S[10001]; // Input string (up to 10,000 characters)
    scanf("%s", S); // Read the input string

    int len = strlen(S);
    
    // To hold the smallest string found
    char minString[10001] = {0};
    
    // Start with a string that's larger than any possible result
    strcpy(minString, S);
    
    // Try every possible split point
    for (int i = 1; i < len; i++) {
        // Create two parts
        char part1[10001], part2[10001];

        // Copy the first part and null terminate it
        strncpy(part1, S, i);
        part1[i] = '\0';

        // Copy the second part and null terminate it
        strcpy(part2, S + i);
        
        // Sort both parts
        qsort(part1, i, sizeof(char), compare);
        qsort(part2, len - i, sizeof(char), compare);

        // Concatenate the sorted parts
        char combined[10001];
        snprintf(combined, sizeof(combined), "%s%s", part1, part2);

        // Check if this combined string is smaller
        if (strcmp(combined, minString) < 0) {
            strcpy(minString, combined);
        }
    }

    // Print the smallest string
    printf("%s\n", minString);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to compare two characters (used in qsort)
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b;
}

int main() {
    char S[10001]; // Input string (up to 10,000 characters)
    scanf("%s", S); // Read the input string

    int len = strlen(S);
    
    // To hold the smallest string found
    char minString[10001] = {0};
    
    // Start with a string that's larger than any possible result
    strcpy(minString, S);
    
    // Try every possible split point
    for (int i = 1; i < len; i++) {
        // Create two parts
        char part1[10001], part2[10001];

        // Copy the first part and null terminate it
        strncpy(part1, S, i);
        part1[i] = '\0';

        // Copy the second part and null terminate it
        strcpy(part2, S + i);
        
        // Sort both parts
        qsort(part1, i, sizeof(char), compare);
        qsort(part2, len - i, sizeof(char), compare);

        // Concatenate the sorted parts
        char combined[10001];
        snprintf(combined, sizeof(combined), "%s%s", part1, part2);

        // Check if this combined string is smaller
        if (strcmp(combined, minString) < 0) {
            strcpy(minString, combined);
        }
    }

    // Print the smallest string
    printf("%s\n", minString);
    return 0;
}
