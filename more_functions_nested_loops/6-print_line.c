#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: the number of times the character is printed
 *
 * Return: void
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
	for (m = 0; m < n; ++m)
		_putchar('_');
	}
	_putchar('\n');
}
