#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
    int count;
    unsigned long fib1 = 1, fib2 = 2, sum;
    unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
    unsigned long half1, half2;

    // Print the first 92 Fibonacci numbers
    for (count = 3; count <= 92; count++)
    {
        sum = fib1 + fib2;
        printf("%lu, ", sum);
        fib1 = fib2;
        fib2 = sum;
    }

    // Split the large Fibonacci numbers into halves
    fib1_half1 = fib1 / 1000000000;
    fib2_half1 = fib2 / 1000000000;
    fib1_half2 = fib1 % 1000000000;
    fib2_half2 = fib2 % 1000000000;

    // Print the remaining Fibonacci numbers
    for (count = 93; count < 99; count++)
    {
        half1 = fib1_half1 + fib2_half1;
        half2 = fib1_half2 + fib2_half2;

        if (fib1_half2 + fib2_half2 > 999999999)
        {
            half1 += 1;
            half2 %= 1000000000;
        }

        printf("%lu%09lu", half1, half2);  // Use %09lu to ensure proper formatting
        if (count != 98)
            printf(", ");

        fib1_half1 = fib2_half1;
        fib1_half2 = fib2_half2;
        fib2_half1 = half1;
        fib2_half2 = half2;
    }
    printf("\n");
    return (0);
}

