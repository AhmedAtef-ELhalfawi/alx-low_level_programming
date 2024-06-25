#include "main.h"

/**
 * print_times_table - Prints the times table for a given number.
 * @n: The number to calculate the times table for.
 */
void print_times_table(int n)
{
    int i, j, result;

    if (n >= 0 && n <= 15) // Input validation (clearer condition)
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                result = i * j;

                // Print the result with proper formatting
                if (j != 0) 
                {
                    _putchar(','); // Separator for non-initial entries
                    _putchar(' ');  // Space for alignment
                }

                // Handle leading spaces and multi-digit numbers
                if (result < 10) 
                    _putchar(' ');
                if (result < 100)
                    _putchar(' ');
                
                // Print the digits of the result
                if (result >= 100) 
                    _putchar((result / 100) + '0');
                if (result >= 10)
                    _putchar(((result / 10) % 10) + '0');
                _putchar((result % 10) + '0'); 
            }
            _putchar('\n'); // Move to the next line for a new row
        }
    }
}

