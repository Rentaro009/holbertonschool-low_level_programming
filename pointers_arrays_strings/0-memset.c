#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte to fill with
 * @n: bytes of the memory area
 *
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
