#include <stdio.h>
int main() {
    int A, B;
    char ch;
    scanf("%d %d", &A, &B);
    int valid = 1;
    for (int i = 0; i < A; i++) {
        scanf(" %c", &ch);
        if (ch < '0' || ch > '9') {  
            valid = 0;
        }
    }
    scanf(" %c", &ch);
    if (ch != '-') {
        valid = 0;
    }
    for (int i = 0; i < B; i++) {
        scanf(" %c", &ch);
        if (ch < '0' || ch > '9') {  
            valid = 0;
        }
    }
    if (valid) {
        printf("Yes\n");
    } 
    else {
        printf("No\n");
    }
    
    return 0;
}
