#include "main.h"

/**
 * reverse_array - reverse an array of integers
 *
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b, m, tmp;

	m = n - 1;

	for (b = 0; b < n / 2; b++)
	{
		tmp = a[b];
		a[b] = a[m];
		a[m--] = tmp;
	}
}
