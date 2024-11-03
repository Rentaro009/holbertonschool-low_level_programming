#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string that is printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int lh, n, m;

	lh = 0;

	while (str[lh] != '\0')
	{
		lh++;
	}

	if (lh % 2 == 0)
	{
		for (m = lh / 2; str[m] != '\0'; m++)
		{
			_putchar(str[m]);
		}
	}
	else if (lh % 2)
	{
		for (n = (lh - 1) / 2; n < lh - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
