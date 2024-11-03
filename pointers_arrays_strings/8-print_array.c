#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 *
 * @a: array to be printed
 * @n: number of elements to print in the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m == 0)
			printf("%d", a[m]);
		else
			printf(", %d", a[m]);
	}
	printf("\n");
}
