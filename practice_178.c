#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the number of elements

    int a[n];  // Declare an array of size n

    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Pointers to the front and end of the array
    int front = 0;
    int end = n - 1;

    // Print elements in the required order
    while (front <= end) {
        if (front == end) {  // If both pointers meet, print only one element
            printf("%d", a[front]);
            front++;
        } else {
            printf("%d %d ", a[front], a[end]); // Print front and end elements
            front++;
            end--;
        }
    }

    printf("\n");  // Print a newline at the end
    return 0;
}
