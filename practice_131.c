#include<stdio.h>
#include<string.h>
int main() {
    char str1[1000] = "mukti";
    int length = strlen(str1);  
    for (int i = 0; i < length / 2; i++) {
        char temp = str1[i];
        str1[i] = str1[length - 1 - i];
        str1[length - 1 - i] = temp;
    }

    printf("%s", str1);
    
    return 0;
}
