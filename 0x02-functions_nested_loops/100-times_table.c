#include "main.h"

/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
    int i, j, res;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            res = i * j;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');

                if (res < 10)
                {
                    _putchar(' ');
                    _putchar(' ');
                }
                else if (res < 100)
                {
                    _putchar(' ');
                }
            }

            if (res < 10)
            {
                _putchar(res + '0');
            }
            else if (res < 100)
            {
                _putchar((res / 10) + '0');
                _putchar((res % 10) + '0');
            }
            else
            {
                _putchar((res / 100) + '0

