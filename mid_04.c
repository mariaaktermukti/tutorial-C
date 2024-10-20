#include <stdio.h>
int main() {
    int n;
    printf("Enter the dimension of the matrix: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Please enter an odd number for the matrix dimension.\n");
        return 1;
    }

    int matrix[n][n];  
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[0][i]; 
        sum += matrix[n-1][i];  
    }
    for (int i = 1; i < n-1; i++) {
        sum += matrix[i][0];  
        sum += matrix[i][n-1]; 
    }
    sum += matrix[n/2][n/2];
    printf("The sum of the boxed positions is: %d\n", sum);

    return 0;
}
