#include "main.h"
#include <stdlib.h>

/**
 * *str_concat -concatenates two strings
 *
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to new string created (Success), NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int n = 0, m = 0, lh = 0, lh2 = 0;

	while (s1 && s1[lh])
		lh++;
	while (s2 && s2[lh2])
		lh2++;

	s3 = malloc(sizeof(char) * (lh + lh2 + 1));
	if (s3 == NULL)
		return (NULL);

	n = 0;
	m = 0;

	if (s1)
	{
		while (n < lh)
		{
			s3[n] = s1[n];
			n++;
		}
	}

	if (s2)
	{
		while (n < (lh + lh2))
		{
			s3[n] = s2[m];
			n++;
			m++;
		}
	}
	s3[n] = '\0';

	return (s3);
}
