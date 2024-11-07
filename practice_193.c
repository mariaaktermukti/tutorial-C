#include <stdio.h>

void swapRows(int matrix[][500], int n, int x, int y) {
    for (int j = 0; j < n; j++) {
        int temp = matrix[x][j];
        matrix[x][j] = matrix[y][j];
        matrix[y][j] = temp;
    }
}

void swapColumns(int matrix[][500], int n, int x, int y) {
    for (int i = 0; i < n; i++) {
        int temp = matrix[i][x];
        matrix[i][x] = matrix[i][y];
        matrix[i][y] = temp;
    }
}

int main() {
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    
    // Adjust to 0-based indexing
    x--; 
    y--;
    
    int matrix[500][500];
    
    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Swap the specified rows and columns
    swapRows(matrix, n, x, y);
    swapColumns(matrix, n, x, y);
    
    // Print the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
