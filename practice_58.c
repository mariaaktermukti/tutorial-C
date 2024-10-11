#include<stdio.h>
#include<string.h>

int main() {
    FILE *file;
    char name[200] = "Maria Akter Mukti";
    int len = strlen(name);
    
    file = fopen("test.txt", "w");
    if(file == NULL) {
        printf("File does not exist");
    } else {
        printf("File is opened.\n");
        for(int i = 0; i < len; i++) {
            fputc(name[i], file);
        }
        printf("File is written successfully.");
        fclose(file);
    }
    return 0;
}
