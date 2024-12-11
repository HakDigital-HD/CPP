
#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE];
    int max = 0; 

    
    printf("Enter %d integers to initialize the array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);

        
        if (i == 0 || numbers[i] > max) {
            max = numbers[i]; 
        }
    }

    
    printf("\nMaximum value in the array: %d\n", max);

    return 0;
}
