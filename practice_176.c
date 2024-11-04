#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int start = 0; // Start index for reversing
    // Traverse through the array to find zeros and reverse accordingly
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            // Reverse the elements from start to i - 1
            reverse(a, start, i - 1);
            start = i + 1; // Update start to the next element after the zero
        }
    }
    
    // Reverse the remaining elements after the last zero if any
    if (start < n) {
        reverse(a, start, n - 1);
    }

    // Print the final order of the array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
