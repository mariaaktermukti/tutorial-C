#include <stdio.h>

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int w, h; // Width and height
        scanf("%d %d", &w, &h);
        
        // Check if it's a square or a rectangle
        if (w == h) {
            printf("Square\n");
        } else {
            printf("Rectangle\n");
        }
    }

    return 0;
}
