#include "main.h"
#include <stdio.h> // Add this line

/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
    int i, j, result; // Move variable declarations here

    if (n < 0 || n > 15)
    {
        /* Exit if n is out of range */
        return;
    }

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = (i * j);
            if (j != 0)
            {
                printf(", ");
            }
            if (result < 10 && j != 0)
            {
                printf("   ");
            }
            else if (result >= 10 && result < 100)
            {
                printf("  ");
            }
            printf("%d", result);
        }
        printf("\n");
    }
}

