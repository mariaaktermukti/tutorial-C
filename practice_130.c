#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000]="apple";
    char str2[1000]="apple";
    printf("%s %s\n", str1, str2);
   int compare= strcmp( str1, str2);
    printf("%d ", compare);
    return 0;
}