#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: the string print from
 *
 * Return: void
 */

void puts2(char *str)
{
	int lh, n;

	lh = 0;

	while (str[lh] != '\0')
	{
		lh++;
	}

	for (n = 0; n < lh; n += 2)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
