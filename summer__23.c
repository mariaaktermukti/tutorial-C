#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct demon {
    char name[60]; 
    int power;    
};

int atleastOne(char *input) {
    for (int i = 0; i < strlen(input); i++) {
        if (!isalpha(input[i])) { 
            return 1;
        }
    }
    return 0; 
}

int DivisibleBy_7(int x) {
    if (x % 7 == 0) {
        return 1; 
    } 
    else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter the number of demons: ");
    scanf("%d", &n);

    struct demon demons[n]; 
    int eliminableCount = 0; 

    for (int i = 0; i < n; i++) {
        printf("Enter name of demon %d: ", i + 1);
        scanf("%s", demons[i].name);
        printf("Enter power of demon %d: ", i + 1);
        scanf("%d", &demons[i].power);
    }

    for (int i = 0; i < n; i++) {
        if (DivisibleBy_7(demons[i].power) || atleastOne(demons[i].name)) {
            eliminableCount++; 
        }
    }
    printf("Number of demons that can be eliminated: %d\n", eliminableCount);

    return 0;
}
