#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;

	/* Print digits from 0 to 9 */
	while (i < 10)
	{
		/*
		 * This prints the character equivalent of the integer
		 */
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	/*
	 * Avoid an infinite loop
	 */
	i = 98;
	positive_or_negative(i);

	return (0);
}
