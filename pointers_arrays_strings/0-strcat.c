#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string to add ro
 * @src: string to add
 *
 * Return: dest
 */


char *_strcat(char *dest, char *src)
{
	int n, m;

	n = 0;
	m = 0;

	while (dest[n] != '\0')
		n++;

	while (src[m] != '\0')
	{
		dest[n] = src[m];
		m++;
		n++;
	}

	dest[n] = '\0';

	return (dest);
}
