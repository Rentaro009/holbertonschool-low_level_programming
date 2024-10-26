#include "main.h"

/**
 * times_table - print the 9 times table starting with 0
 *
 * Return: Always void
 */

void times_table(void)
{
	int n, nr, nb;

	for (n = 0; n <= 9; n++)
	{
	_putchar('0');
	
	for (nr = 1; nr <= 9; nr++)
	{
		_putchar(',');
		_putchar(' ');
		
		nb = n * nr;

		if (nb <= 9)
			_putchar(' ');
		else
			_putchar((nb / 10) + '0');

		_putchar((nb % 10) + '0');
	}
	_putchar('\n');
	}

}
