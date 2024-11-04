#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases

    while (t--) {
        int n;
        scanf("%d", &n);  // Read the number of elements in the array
        int a[n];
        int odd_count = 0, even_count = 0;

        // Read the elements and count odd and even numbers
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }

        // Calculate the difference
        int difference = odd_count - even_count;

        // If the difference is odd, it's impossible
        if (difference % 2 != 0) {
            printf("-1\n");
        } else {
            // The number of operations needed to balance the counts
            int operations = difference < 0 ? -difference / 2 : difference / 2;
            printf("%d\n", operations);
        }
    }

    return 0;
}
