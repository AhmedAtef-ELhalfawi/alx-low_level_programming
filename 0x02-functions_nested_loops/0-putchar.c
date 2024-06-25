#include <unistd.h>

/**
 * main - Prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != '\0')
	{
		write(1, &text[i], 1);
		i++;
	}

	write(1, "\n", 1);

	return (0);
}


