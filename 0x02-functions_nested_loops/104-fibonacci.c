#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
    int count;
    unsigned long fib1 = 1, fib2 = 2;
    unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
    unsigned long half1, half2;

    printf("%lu, %lu, ", fib1, fib2); /* Print the initial values */

    for (count = 2; count < 98; count++)
    {
        /* Calculate the next Fibonacci number using half-values */
        fib1_half1 = fib1 / 10000000000;  
        fib1_half2 = fib1 % 10000000000; 
        fib2_half1 = fib2 / 10000000000; 
        fib2_half2 = fib2 % 10000000000;

        half1 = fib1_half1 + fib2_half1;
        half2 = fib1_half2 + fib2_half2;

        /* Carry-over if necessary */
        if (fib1_half2 + fib2_half2 > 9999999999)
        {
            half1 += 1;
            half2 %= 10000000000;
        }

        /* Reconstruct the full Fibonacci number */
        fib1 = fib1_half1 * 10000000000 + fib1_half2;
        fib2 = fib2_half1 * 10000000000 + fib2_half2;

        printf("%lu", fib2);

        if (count != 97) 
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

