#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * @n: the sign to check
 *
 * Return: 1 if n is greater than zero, or 0 if it equals zero, -1 otherwise
 */

int print_sign(int n)
{
	if (n >= 0)
	{
	_putchar('+');

	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');

	return (0);
	}
	else
	{
	_putchar('-');

	return (-1);
	}
}

