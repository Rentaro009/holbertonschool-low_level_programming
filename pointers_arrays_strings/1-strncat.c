#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: detstination string
 * @src: source string
 * @n: number of bytes of str to cocatenate
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int b, m;

	b = 0;
	m = 0;

	while (dest[b] != '\0')
		b++;

	while (src[m] != '\0' && m < n)
	{
		dest[b] = src[m];
		b++;
		m++;
	}

	dest[b] = '\0';

	return (dest);
}
