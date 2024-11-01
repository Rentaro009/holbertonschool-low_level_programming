#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int lh = 0;

	while (s[lh] != '\0')
	{
		lh++;
	}
	while (lh > 0)
	{
	_putchar(s[lh - 1]);
	lh--;
	}
	_putchar('\n');
}
