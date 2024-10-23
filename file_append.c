/*appened*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp= fopen("exam.txt", "a");

    if(fp == NULL){
        printf("\n Not found");
        return 1;
    }
    else{
        printf("\n File open in append mode.");
        fputs("write something in it", fp);
    }
    fclose(fp);
    return 0;
}