#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include ctype.h for tolower
void toSpelledOut(int number, char* str) {
    char* digitWords[] = {
        "ZERO", "ONE", "TWO", "THREE", "FOUR", 
        "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"
    };

    // Reset the string
    str[0] = '\0';

    // Break down the number into its digits and build the spelled-out string
    while (number > 0) {
        int digit = number % 10;  // Get the last digit
        number /= 10;             // Remove the last digit
        // Prepend the corresponding word to the string
        char temp[100]; // Ensure temp is large enough
        sprintf(temp, "%s%s ", digitWords[digit], str);
        strcpy(str, temp); // Copy back to str
    }

    // Remove the trailing space
    // str[strlen(str) - 1] = '\0';
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

    // Input number from user
    printf("Enter a number (do not start or end with '0'): ");
    scanf("%d", &number);

    // Convert number to spelled out
    toSpelledOut(number, spelledOut);

    // Ask user for case choice
    printf("For uppercase press 1\nFor lowercase press 2\n");
    scanf("%d", &choice);

    // Print in chosen case
    if (choice == 1) {
        printf("%s\n ", spelledOut); // Print the spelled-out number in uppercase
    } 
    else if (choice == 2) {
        char lowerSpelledOut[100];
        strcpy(lowerSpelledOut, spelledOut); // Copy to another string for conversion
        lowerCase(lowerSpelledOut); // Convert to lowercase
        printf("%s\n ", lowerSpelledOut); // Print the spelled-out number in lowercase
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
