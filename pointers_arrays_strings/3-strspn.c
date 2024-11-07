#include "main.h"

/**
 * _strspn -gets the length of a prefix substring
 *
 * @s: string to evaluate
 * @accept: list of characters to match in s
 *
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, m, b, f;

	b = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		f = 0;
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
			{
				b++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (b);
		}
	}

	return (0);
}
