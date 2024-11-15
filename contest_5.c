#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int grid[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    int peak_count = 0;
    int peaks[n * m][2]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int is_peak = 1;

            if (i > 0 && grid[i][j] <= grid[i-1][j]) {
                is_peak = 0;
            }
            if (i < n-1 && grid[i][j] <= grid[i+1][j]) {
                is_peak = 0;
            }
            if (j > 0 && grid[i][j] <= grid[i][j-1]) {
                is_peak = 0;
            }
            if (j < m-1 && grid[i][j] <= grid[i][j+1]) {
                is_peak = 0;
            }
            if (is_peak) {
                peaks[peak_count][0] = i + 1;
                peaks[peak_count][1] = j + 1;
                peak_count++;
            }
        }
    }
    printf("%d\n", peak_count);
    for (int i = 0; i < peak_count; i++) {
        printf("%d %d\n", peaks[i][0], peaks[i][1]);
    }
    return 0;
}
