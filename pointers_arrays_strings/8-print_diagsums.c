#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: square matrix that we print the sum of diagonals
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int n;

	unsigned int sm, sm1;

	sm = 0;
	sm1 = 0;

	for (n = 0; n < size; n++)
	{
		sm += a[(size * n) + n];
		sm1 += a[(size * (n + 1)) - (n + 1)];
	}

	printf("%d, %d\n", sm, sm1);
}
