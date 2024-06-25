#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of rows and columns in the times table
 */
void print_times_table(int n) {
    if (n < 0 || n > 15)
        return;  // Exit if n is out of range

    int i, j, product;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            product = i * j;

            // Print commas and spaces except before the first column
            if (j > 0) {
                printf(", ");
            }

            // Adjust spacing based on the value of product
            if (product < 10) {
                printf("  %d", product);
            } else if (product < 100) {
                printf(" %d", product);
            } else {
                printf("%d", product);
            }
        }
        printf("\n");
    }
}

