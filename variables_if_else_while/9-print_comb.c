#include <stdio.h>

/**
 * main - prints all possible combinations of single-digits numbers
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int nr;

	for (nr = 0; nr < 10; nr++)
	{
		putchar(nr + '0');
		if (nr < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
