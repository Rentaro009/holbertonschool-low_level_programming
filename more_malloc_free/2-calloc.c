#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte to fill with
 * @n: bytes of the memory area
 *
 * Return: pointer to memory area
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

/**
 * *_calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements of array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
