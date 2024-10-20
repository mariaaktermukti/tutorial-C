#include<stdio.h>
int main(){
    char str[1000];
    // scanf("%[^\n]s", str); 
    fgets(str, sizeof(str), stdin);

    // printf("%s", str); 
    fputs(str, stdout);
    return 0;
}