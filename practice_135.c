/*Code force__ (string_C)*/
#include <stdio.h>
#include <string.h>
int main() {
    char X[21], Y[21]; 
    scanf("%s %s", X, Y);
    int compare = strcmp(X, Y);  

    if (compare < 0) {
        printf("%s\n", X);
    } 
    else {
        printf("%s\n", Y);
    }

    return 0;
}