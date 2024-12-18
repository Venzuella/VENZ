#include <stdio.h>

#define MAX 10  // Declare a constant for the array size

int a[MAX];      // Global array
int rand_seed = 10;  // Global seed for random number generator

// Function to generate random integers
int rand(void) {
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

// Bubble sort function
void bubble_sort(void) {
    int t, x, y;

    // Bubble sort logic
    for (x = 0; x < MAX - 1; x++) {
        for (y = 0; y < MAX - x - 1; y++) {
            if (a[y] > a[y + 1]) {
                t = a[y];
                a[y] = a[y + 1];
                a[y + 1] = t;
            }
        }
    }

    // Print sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < MAX; i++) {
        printf("%d\n", a[i]);
    }
}

int main(void) {
    // Fill the array with random numbers
    for (int i = 0; i < MAX; i++) {
        a[i] = rand() % 100;  // Limit random numbers to range 0-99
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("--------------------\n");

    // Sort the array
    bubble_sort();

    return 0;
}
