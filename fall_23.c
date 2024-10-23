/*Fall 23(Set_A)--> Q1*/

#include <stdio.h>
#include <string.h>
void toSpelledOut(int number, char* str) {
    const char* digits[] = {
        "ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", 
        "SIX", "SEVEN", "EIGHT", "NINE"
    };

    int index = 0; 
    while (number > 0) {
        int digit = number % 10;
        if (index > 0) {
            str[index++] = ' '; 
        }
        strcpy(&str[index], digits[digit]);
        index += strlen(digits[digit]); 
        number /= 10; 
    }
    str[index] = '\0'; 
    for (int i = 0; i < index / 2; i++) {
        char temp = str[i];
        str[i] = str[index - i - 1];
        str[index - i - 1] = temp;
    }
}

void upperCase(char* num) {
    for (int i = 0; num[i]; i++) {
        num[i] = toupper(num[i]); 
    }
}

int main() {
    int number, choice;
    char spelledOut[100]; 

    printf("Enter a number (not starting or ending with 0): ");
    scanf("%d", &number);

    toSpelledOut(number, spelledOut);
    
    printf("For uppercase press 1\nFor lowercase press 2\n");
    scanf("%d", &choice);

    
    if (choice == 1) {
        upperCase(spelledOut);
        printf("%s\n", spelledOut);
    }
     else if (choice == 2) {
        printf("%s\n", spelledOut);
    } 
    else {
        printf("Invalid choice\n");
    }

    return 0;
}
