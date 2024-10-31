/*hacker rank*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);  

    int *array = (int *)malloc(sizeof(int)); 
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    for (int i = 0; i < N; i++) {
        int number;
        scanf("%d", &number); 

        int *temp = (int *)realloc(array, (i + 1) * sizeof(int));
        if (temp == NULL) {
            printf("Memory allocation failed!\n");
            free(array); 
            return 1; 
        }
        array = temp; 

        array[i] = number; 
    }

    
    for (int i = 0; i < N; i++) {
        printf("%d", array[i]);
        if (i < N - 1) {
            printf(" "); 
        }
    }
    printf("\n"); 
    free(array);
    return 0;
}
