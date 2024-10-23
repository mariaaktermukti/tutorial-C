/*Fall 23(Set_B)--> Q1*/
#include <stdio.h>
#include <string.h>

// Function to encode the text using Caesar Cipher
void encoder(char *p, int shift) {
    for (int i = 0; p[i] != '\0'; i++) {
        char currentChar = p[i];

        if (currentChar >= 'A' && currentChar <= 'Z') {
            p[i] = (currentChar - 'A' + shift) % 26 + 'A';
        }
        else if (currentChar >= 'a' && currentChar <= 'z') {
            p[i] = (currentChar - 'a' + shift) % 26 + 'a';
        }
    }
}

int main() {
    char message[100]; 
    int shift;

    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin);
    
    message[strcspn(message, "\n")] = '\0';

    printf("Enter the shift value: ");
    scanf("%d", &shift);

  
    encoder(message, shift);

  
    printf("Encoded message: %s\n", message);

    return 0;
}
