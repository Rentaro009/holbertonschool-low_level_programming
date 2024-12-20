#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array to create
 * @c: char to initializes the array c
 *
 * Return: pointer to array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int n = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (n < size)
	{
		*(p + n) = c;
		n++;
	}

	*(p + n) = '\0';

	return (p);
}
