#include<stdio.h>
#include<string.h>
#include<ctype.h>

void toSpelledOut(int number, char*str){
    char* digitWords[]={"ZER0", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    str[0]='\0';
    while(number!=0){
        int digit= number%10;
        number= number /10;
        char temp[100];
        sprintf(temp, "%s%s", digitWords[digit],str);
        strcpy(str, temp);
    }
}
void lowerCase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    int number;
    int choice;
    char spelledOut[100];

    printf("Enter a number (do not start or end with '0'): ");
    scanf("%d", &number);

    toSpelledOut(number, spelledOut);

 printf("For uppercase press 1\nFor lowercase press 2\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("%s\n ", spelledOut); 
    } 
    else if (choice == 2) {
        char lowerSpelledOut[100];
        strcpy(lowerSpelledOut, spelledOut); 
        lowerCase(lowerSpelledOut); 
        printf("%s\n ", lowerSpelledOut); 
    } 
    else {
        printf("Invalid choice!\n");
    }
        return 0;
}
