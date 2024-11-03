#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, with the
 * null byte
 *
 * @dest: pointer ro the buffer in what we copy the string
 * @src: the string to be copied
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int lh, n;

	lh = 0;

	while (src[lh] != '\0')
	{
		lh++;
	}

	for (n = 0; n < lh; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}
