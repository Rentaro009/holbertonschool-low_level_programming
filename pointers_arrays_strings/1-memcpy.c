#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes of memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
