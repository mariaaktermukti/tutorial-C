#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int m[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int main_diagonal = 0, sec_diagonal = 0;

    for (int i = 0; i < n; i++) {
        main_diagonal += m[i][i];        
        sec_diagonal += m[i][n - i - 1];  
    }

    int diff = abs(main_diagonal - sec_diagonal);
    printf("%d\n", diff);

    return 0;
}
