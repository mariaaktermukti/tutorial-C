
#include<stdio.h>
#include<string.h>
int main() {
    
     char a[] = "hello";
    char b[] = "world";
    strcpy(b,a); 

    printf("%s", b);
    
    return 0;
}
