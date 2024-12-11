
#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE];
    int sum = 0;

    
    printf("Enter %d integers to initialize the array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);

        
        sum += numbers[i];
    }

    
    printf("\nSum of array elements: %d\n", sum);

    return 0;
}
