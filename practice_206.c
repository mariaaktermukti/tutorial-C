#include <stdio.h>
void printSpaces(int spaces) {
    if (spaces == 0) {
        return;
    }
    printf(" ");
    printSpaces(spaces - 1);
}
void printStars(int stars) {
    if (stars == 0) {
        return;
    }
    printf("*");
    printStars(stars - 1);
}
void printPyramid(int n, int currentRow) {
    if (currentRow > n) {
        return;
    }
    int spaces = n - currentRow;
    int stars = 2 * currentRow - 1;
    printSpaces(spaces);
    printStars(stars);
    printf("\n");
    printPyramid(n, currentRow + 1);
}

int main() {
    int N;
    scanf("%d", &N);

    printPyramid(N, 1); 
    return 0;
}
