/*string Copy*/
#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000]="Maria";
    char str2[1000]="Mostafiz";
    printf("%s %s\n", str1, str2);
    strcpy(str1, str2);
    printf("%s %s", str1, str2);
    return 0;
}