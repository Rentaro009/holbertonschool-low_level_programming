#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int nr;

	for (nr = '0'; nr <= '9'; nr++)
	{
	putchar(nr);
	}
	for (nr = 'a'; nr <= 'f'; nr++)
	{
	putchar(nr);
	}
	putchar('\n');

	return (0);
}
