#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98
 *               separated by commas followed
 *               by a space, in order
 *
 * @n: the starting number
 */
void print_to_98(int n)
{
	int counter;

	if (n > 98)
	{
		for (counter = n; counter > 98; --counter)
		{
			printf("%d, ", counter);
		}
	}
	else
	{
		for (counter = n; counter < 98; ++counter)
		{
			printf("%d, ", counter);
		}
	}
	printf("98\n");
}

