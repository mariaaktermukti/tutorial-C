#include <stdio.h>
#include <string.h>
int main() {
    char S1[1001],S2[1001],S3[1001];
    char minString[1001],maxString[1001];
    scanf("%s %s %s", S1,S2,S3);
    
    strcpy(minString, S1);
    strcpy(maxString,S1);

    if (strcmp(S2, minString) < 0) {
        strcpy(minString, S2); 
    }
    if (strcmp(S2, maxString) > 0) {
        strcpy(maxString, S2); 
    }

    if (strcmp(S3, minString) < 0) {
        strcpy(minString, S3); 
    }
    if (strcmp(S3, maxString) > 0) {
        strcpy(maxString, S3); 
    }

    printf("%s\n", minString);
    printf("%s\n", maxString); 

    return 0;
}
