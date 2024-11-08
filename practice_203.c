#include <stdio.h>
#include <string.h>

int min_operations(char a, char b, char c) {
    if (a == b && b == c) {
        return 0;
    }
    if (a == b || a == c || b == c) {
        return 1;
    }
    return 2;
}

int main() {
    char str1[100], str2[100], str3[100];
    
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    
    int length = strlen(str1);
    int total_operations = 0;
    
    for (int i = 0; i < length; i++) {
        total_operations += min_operations(str1[i], str2[i], str3[i]);
    }

    printf("%d\n", total_operations);
    return 0;
}
