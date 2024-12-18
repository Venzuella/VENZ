#include <stdio.h>

typedef struct {
    int id;       // Integer field
    float value;  // Float field
    char name[20]; // String field
} Record;

// Function to sort an array of records by integer field
void sort_records(Record records[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (records[j].id > records[j + 1].id) {
                // Swap records
                Record temp = records[j];
                records[j] = records[j + 1];
                records[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    // Testing operators and precedence
    int a = 10, b = 3;
    float result;

    result = (float)a / b;  // Typecasting to get floating-point division
    printf("Typecasting: 10 / 3 = %.2f\n", result);

    printf("Operator precedence:\n");
    printf("5 + 3 * 4 = %d\n", 5 + 3 * 4);  // Multiplication first
    printf("(5 + 3) * 4 = %d\n", (5 + 3) * 4); // Parentheses change precedence

    int i = 5;
    printf("Increment/Decrement:\n");
    printf("i = %d\n", i);
    printf("i++ = %d\n", i++); // Post-increment: prints current value, then increments
    printf("After i++: i = %d\n", i);
    printf("++i = %d\n", ++i); // Pre-increment: increments first, then prints

    // Array of records
    Record records[] = {
        {3, 10.5, "Record3"},
        {1, 7.8, "Record1"},
        {2, 15.2, "Record2"}
    };
    int size = sizeof(records) / sizeof(records[0]);

    printf("\nBefore sorting:\n");
    for (int k = 0; k < size; k++) {
        printf("ID: %d, Value: %.1f, Name: %s\n", records[k].id, records[k].value, records[k].name);
    }

    // Sort the records by the integer field (ID)
    sort_records(records, size);

    printf("\nAfter sorting:\n");
    for (int k = 0; k < size; k++) {
        printf("ID: %d, Value: %.1f, Name: %s\n", records[k].id, records[k].value, records[k].name);
    }

    return 0;
}
