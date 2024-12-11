#include <stdio.h>
#define SIZE 10

int main() {
    int numbers[SIZE];

    
    printf("Enter %d integers to initialize the array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nArray elements:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}
