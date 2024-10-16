#include <stdio.h>

int main(void) {
    int start, end, step;
    float miles, kilometers;

    // Accept user input for start, end, and step
    printf("Enter the starting value in miles: ");
    scanf("%d", &start);

    printf("Enter the ending value in miles: ");
    scanf("%d", &end);

    printf("Enter the increment step: ");
    scanf("%d", &step);

    // Print the heading for the table
    printf("\nMiles   Kilometers\n");
    printf("-------------------\n");

    // Loop to generate the table
    for (miles = start; miles <= end; miles += step) {
        kilometers = miles * 1.60934;  // Conversion formula
        printf("%5.1f  %10.2f\n", miles, kilometers);
    }

    return 0;
}
