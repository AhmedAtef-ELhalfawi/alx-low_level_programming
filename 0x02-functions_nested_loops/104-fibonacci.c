#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
    int count = 0;  // Initialize count to 0
    unsigned long fib1 = 1, fib2 = 2, sum;
    unsigned long fib1_half1 = 0, fib1_half2 = 0, fib2_half1 = 0, fib2_half2 = 0;
    unsigned long half1, half2;

    printf("%lu, %lu, ", fib1, fib2);  // Print initial values

    for (count = 2; count < 98; count++)
    {
        sum = fib1 + fib2;

        // Split the result into two parts (handling large Fibonacci numbers)
        fib1_half1 = fib1 / 1000000000; 
        fib1_half2 = fib1 % 1000000000;
        fib2_half1 = fib2 / 1000000000;
        fib2_half2 = fib2 % 1000000000;

        // Calculate next Fibonacci number's halves
        half1 = fib1_half1 + fib2_half1;
        half2 = fib1_half2 + fib2_half2;
        if (fib1_half2 + fib2_half2 > 999999999)
        {
            half1++;
            half2 %= 1000000000; // Reset if there's a carry-over
        }
        
        // Print current Fibonacci number
        printf("%lu%010lu", half1, half2);
        if (count != 97) // Add comma and space 
            printf(", ");

        // Prepare for next iteration
        fib1 = fib2;
        fib2 = sum;

        // Update half values for the next iteration
        fib1_half1 = fib2_half1;
        fib1_half2 = fib2_half2;
        fib2_half1 = half1;
        fib2_half2 = half2;
    }

    printf("\n");
    return (0);
}

