#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *fp;
  
    fp = fopen("exam.txt", "r");
    if (fp == NULL) {
        printf("\nFile is not found. Creating the file...\n");

        fp = fopen("exam.txt", "w");

        if (fp == NULL) {
            printf("\nError in creating the file.\n");
            return 1;
        } 
        else {
            printf("\nFile is created.\n");
        }
    } 
    else {
        printf("\nFile opened successfully in read mode.\n");
        fclose(fp); 
    }

    fclose(fp);
    return 0;
}
