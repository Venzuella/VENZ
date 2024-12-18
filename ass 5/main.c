#include <stdio.h>

// Create user-defined types
typedef int boolean;
typedef float real;

// Define constants for boolean values
#define TRUE 1
#define FALSE 0

int main(void) {
    // Standard types
    int i = 42;             // Integer
    float f = 3.14;         // Floating-point
    char c = 'A';           // Character
    char str[] = "Hello";   // String (array of characters)

    // User-defined types
    boolean isEven;
    real num1 = 7.5, num2 = 2.5, result;

    // Demonstrate typecasting
    result = (real)i / 3;   // Typecast integer to float before division

    // Check if an integer is even or odd
    isEven = (i % 2 == 0) ? TRUE : FALSE;

    // Print values
    printf("Integer: %d\n", i);
    printf("Floating-point: %.2f\n", f);
    printf("Character: %c\n", c);
    printf("String: %s\n", str);
    printf("Result of typecasted division: %.2f\n", result);
    printf("Is the integer even? %s\n", isEven ? "TRUE" : "FALSE");

    return 0;
}

