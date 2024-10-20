#include <stdio.h>
int main() {
    int W; 
    int problems[W]; 
    int R1, R2;
    printf("Enter the number of weeks completed: ");
    scanf("%d", &W);
    printf("Enter the number of problems solved in each week:\n");
    for (int i = 0; i < W; i++) {
        scanf("%d", &problems[i]);
    }
    printf("Enter the range of weeks to search: ");
    scanf("%d %d", &R1, &R2);
    int found = 0;
    printf("Weeks where Farina solved 10 or more problems:\n");
    for (int i = R1; i <= R2; i++) {
        if (problems[i] >= 10) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("No weeks found");
    }
    printf("\n");

    return 0;
}
