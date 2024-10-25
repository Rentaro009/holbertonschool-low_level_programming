#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: the value of int
 *
 * Return: nn
 */

int print_last_digit(int n)
{
	int nn = n % 10;

	if (nn < 0)

	nn *= -1;

	_putchar (nn + '0');

	return (nn);
}
