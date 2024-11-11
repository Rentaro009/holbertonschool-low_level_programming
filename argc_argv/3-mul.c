#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return int converted from string
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
		lh ++;

	while (n < lh && p == 0)
	{
		if (s[n] == '-')
			++ d;

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
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int rt, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	rt = n1 * n2;

	printf("%d\n", rt);

	return (0);
}
