#include "main.h"

/**
 * print_chessboard - print the chessboard
 *
 * @a: two dimension array to print
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int k, q;

	for (k = 0; k < 8; k++)
	{
		for (q = 0; q < 8; q++)
		{
			_putchar(a[k][q]);
		}
		_putchar('\n');
	}
}
