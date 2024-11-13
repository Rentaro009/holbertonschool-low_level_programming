#include <stdlib.h>
#include "main.h"

/**
 * *_strdup -copies the string given as a parameter
 *
 * @str: string to duplicate
 *
 * Return: pointer to copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int n, lh;

	n = 0;
	lh = 0;

	if (str == NULL)
		return (NULL);

	while (str[lh])
		lh++;

	dup = malloc(sizeof(char) * (lh + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[n] = str[n]) != '\0')
		n++;

	return (dup);
}
