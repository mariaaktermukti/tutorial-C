#include <stdio.h>
#include <string.h>

int main() {
    int N; 
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        char S[51], T[51]; // Strings with max length of 50 + 1 for null terminator
        scanf("%s %s", S, T); // Read the two strings
        
        char result[103] = ""; // Result string to hold merged characters (max length 100 + 1 for null terminator)
        int lenS = strlen(S);
        int lenT = strlen(T);
        
        // Merge characters from S and T
        int j;
        for (j = 0; j < lenS && j < lenT; j++) {
            // Append characters alternately
            char temp[3] = { S[j], T[j], '\0' }; // Temporary string to hold current pair
            strcat(result, temp); // Concatenate to result
        }
        
        // Append the remaining characters from the longer string
        if (lenS > lenT) {
            strcat(result, S + j); // Append remaining from S
        } 
        else {
            strcat(result, T + j); // Append remaining from T
        }
        
        // Print the merged result for this test case
        printf("%s\n", result);
    }
    
    return 0;
}
