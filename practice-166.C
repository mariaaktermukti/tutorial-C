#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;

    // Read the number of elements in the array
    scanf("%d", &N);
    int A[N];

    // Read elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Sort the array using bubble sort
    bubbleSort(A, N);

    // Print sorted array
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
