#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int n, d, m, lh, p, dt;

	n = 0;
	d = 0;
	m = 0;
	lh = 0;
	p = 0;
	dt = 0;

	while (s[lh] != '\0')
		lh++;

	while (n < lh && p == 0)
	{
		if (s[n] == '-')
			++d;

		if (s[n] >= '0' && s[n] <= '9')
		{
			dt = s[n] - '0';
			if (d % 2)
				dt = -dt;
			m = m * 10 + dt;
			p = 1;
			if (s[n + 1] < '0' || s[n + 1] > '9')
				break;
			p = 0;
		}
		n++;
	}

	if (p == 0)
		return (0);

	return (m);
}

/**
 * main - adds two positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Success)
 */

int main(int argc, char *argv[])
{
	int sm, nm, n, m, p;

	sm = 0;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (argv[n][m] > '9' || argv[n][m] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (p = 1; p < argc; p++)
	{
		nm = _atoi(argv[p]);
		if (nm >= 0)
		{
			sm += nm;
		}
	}

	printf("%d\n", sm);
	return (0);
}
