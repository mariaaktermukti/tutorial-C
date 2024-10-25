/*Code force__ (string_E)*/
#include <stdio.h>
#include <string.h>
int main() {
    char S[1000001];
    scanf("%s", S);  
    int sum = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        sum += S[i] - '0'; 
    }
    printf("%d\n", sum); 
    return 0;
}
