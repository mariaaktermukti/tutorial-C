/*Code force__ (string_D)*/
#include <stdio.h>
#include <string.h>
int main() {
    char A[11], B[11];  
    scanf("%s", A);
    scanf("%s", B);
    int lenA = strlen(A);
    int lenB = strlen(B);
    printf("%d %d\n", lenA, lenB);
    char concat[22];  
    strcpy(concat, A);
    strcat(concat, B);
    printf("%s\n", concat);

    char swappedA[11], swappedB[11];
    
    if (lenA > 0 && lenB > 0) {
        swappedA[0] = B[0];  
        strcpy(swappedA + 1, A + 1); 
        swappedA[lenA] = '\0';
        swappedB[0] = A[0]; 
        strcpy(swappedB + 1, B + 1); 
        swappedB[lenB] = '\0'; 
        printf("%s %s\n", swappedA, swappedB);
    }

    return 0;
}
