#include<stdio.h>
int main(){
    FILE *file;
    char name[30];
    file= fopen("test.txt","w");
    if(file==NULL){
        printf("File does not exist.");
    }
    else{
        printf("File is opened.");
        printf("Enter your name :");
        gets(name);
        fputs(name,file);
        printf("File is written successfully.");
        fclose(file);
    }
    return 0;
}