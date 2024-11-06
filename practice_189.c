#include <stdio.h>

// Function to calculate the average of the array
double calculateAverage(double A[], int N) {
    double sum = 0.0;
    
    // Sum all elements in the array
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }
    
    // Calculate the average
    return sum / N;
}

int main() {
    int N;
    
    // Read the size of the array
    scanf("%d", &N);
    
    double A[N];
    
    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%lf", &A[i]);
    }
    
    // Calculate the average
    double avg = calculateAverage(A, N);
    
    // Print the average with exactly 6 digits after the decimal
    printf("%.6lf\n", avg);
    
    return 0;
}
