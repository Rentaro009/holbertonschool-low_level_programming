#include <stdio.h>

/**
 * main - print all the alphabet
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
