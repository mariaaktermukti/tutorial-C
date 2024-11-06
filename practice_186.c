#include <stdio.h>
#include <stdbool.h>
int countDistinct(int arr[], int n) {
    int count = 0;
    bool seen[2001] = {false}; 
    
    for (int i = 0; i < n; i++) {
        int value = arr[i] + 1000; 
        if (!seen[value]) {
            seen[value] = true; 
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);  
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }
    printf("%d\n", countDistinct(arr, n));
    
    return 0;
}
