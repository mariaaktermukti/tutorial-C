#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp= fopen("splFinal.txt","w");
    if(fp== NULL){
        printf("\n Can't create file.");
        return 0;
    }
    else{
        printf("\nFile is created.");
    }
    fputs("SPL lab is very hard.", fp);
    fclose(fp);
    return 0;
}