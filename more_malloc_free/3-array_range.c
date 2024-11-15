#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer if successful, if not return NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int n, m;

	if (min > max)
		return (NULL);

	m = max - min + 1;

	ptr = malloc(sizeof(int) * m);

	if (ptr == NULL)
		return (NULL);

	for (n = 0; min <= max; n++)
		ptr[n] = min++;

	return (ptr);
}
