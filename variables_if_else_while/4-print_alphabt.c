#include<stdio.h>

/**
 * main - prints the alphabet but the q and the e
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	if (ch != 'q' && ch != 'e')
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
