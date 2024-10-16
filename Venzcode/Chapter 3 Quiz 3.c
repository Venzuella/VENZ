#include <stdio.h>

int main(void) {
    int start, end, step;
    float fahrenheit, celsius;

    // Accepting user input for the start, end, and increment values
    printf("Enter the starting Fahrenheit value: ");
    scanf("%d", &start);

    printf("Enter the ending Fahrenheit value: ");
    scanf("%d", &end);

    printf("Enter the increment step: ");
    scanf("%d", &step);

    // Printing the heading for the table
    printf("\nFahrenheit  Celsius\n");
    printf("--------------------\n");

    // Loop to generate the table
    for (fahrenheit = start; fahrenheit <= end; fahrenheit += step) {
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("%10.1f  %7.1f\n", fahrenheit, celsius);
    }

    return 0;
}
