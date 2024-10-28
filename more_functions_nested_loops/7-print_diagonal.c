#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: the number of times the character is printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int m, b;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			for (b = 0; b < m; b++)
			_putchar(' ');
			_putchar('\\');

			if (b == n - 1)
			continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
