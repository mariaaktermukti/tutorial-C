#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to sort a substring of S from index l to r
void sort_substring(char *S, int l, int r) {
    char *temp = malloc((r - l + 2) * sizeof(char)); // +2 for null-terminator and ease
    strncpy(temp, S + l, r - l + 1);
    temp[r - l + 1] = '\0';
    
    // Sort using bubble sort for simplicity
    int n = r - l + 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                char t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }
    
    // Copy sorted substring back to S
    strncpy(S + l, temp, n);
    free(temp);
}

// Function to reverse a substring of S from index l to r
void reverse_substring(char *S, int l, int r) {
    while (l < r) {
        char temp = S[l];
        S[l] = S[r];
        S[r] = temp;
        l++;
        r--;
    }
}

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);
    
    char *S = malloc((N + 1) * sizeof(char)); // +1 for null-terminator
    scanf("%s", S);
    
    while (Q--) {
        char query[20];
        scanf("%s", query);
        
        if (strcmp(query, "pop_back") == 0) {
            S[strlen(S) - 1] = '\0'; // Remove last character
        } else if (strcmp(query, "front") == 0) {
            printf("%c\n", S[0]); // Print first character
        } else if (strcmp(query, "back") == 0) {
            printf("%c\n", S[strlen(S) - 1]); // Print last character
        } else if (strcmp(query, "sort") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            sort_substring(S, l - 1, r - 1); // 0-based index
        } else if (strcmp(query, "reverse") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            reverse_substring(S, l - 1, r - 1); // 0-based index
        } else if (strcmp(query, "print") == 0) {
            int pos;
            scanf("%d", &pos);
            printf("%c\n", S[pos - 1]); // Print character at position pos
        } else if (strcmp(query, "substr") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            for (int i = l - 1; i < r; i++) {
                printf("%c", S[i]); // Print substring from l to r
            }
            printf("\n");
        } else if (strcmp(query, "push_back") == 0) {
            char x;
            scanf(" %c", &x); // Note the space to ignore newline
            S = realloc(S, (strlen(S) + 2) * sizeof(char)); // +1 for new char, +1 for null
            S[strlen(S)] = x; // Add character to the end
            S[strlen(S) + 1] = '\0'; // Null-terminate
        }
    }
    
    free(S);
    return 0;
}
