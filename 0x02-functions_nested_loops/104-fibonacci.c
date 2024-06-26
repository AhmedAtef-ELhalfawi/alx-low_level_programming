#include <stdio.h>

/**
 * print_fibonacci_numbers - Prints the Fibonacci numbers up to a limit.
 * @limit: The number of Fibonacci numbers to print.
 */
void print_fibonacci_numbers(int limit)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	/* Print the first two Fibonacci numbers */
	printf("%lu, %lu", fib1, fib2);

	/* Print the subsequent Fibonacci numbers */
	for (count = 3; count <= limit; count++)
	{
		sum = fib1 + fib2;

		/* Split the numbers if they exceed the limit for unsigned long */
		if (count > 92)
		{
			fib1_half1 = fib1 / 1000000000;
			fib2_half1 = fib2 / 1000000000;
			fib1_half2 = fib1 % 1000000000;
			fib2_half2 = fib2 % 1000000000;

			half1 = fib1_half1 + fib2_half1;
			half2 = fib1_half2 + fib2_half2;

			if (half2 >= 1000000000)
			{
				half1 += 1;
				half2 %= 1000000000;
			}

			printf(", %lu%09lu", half1, half2);
		}
		else
		{
			printf(", %lu", sum);
		}

		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_fibonacci_numbers(98);
	return (0);
}

