#include <stdio.h>

/**
 * main - prints all single digits numbers of base 10
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int nr;

	for (nr = 0; nr < 10; nr++)
	{
	putchar(nr + '0');
	}
	putchar('\n');

	return (0);
}
