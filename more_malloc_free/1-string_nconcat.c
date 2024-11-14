#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings 
 *
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int b = 0, m = 0, lh = 0, lh2 = 0;

	while (s1 && s1[lh])
		lh++;
	while (s2 && s2[lh2])
		lh2++;

	if (n < lh2)
		s3 = malloc(sizeof(char) * (lh + n + 1));
	else
		s3 = malloc(sizeof(char) * (lh + lh2 + 1));

	if (!s3)
		return (NULL);

	while (b < lh)
	{
		s3[b] = s1[b];
		b++;
	}

	while (n < lh2 && b < (lh + n))
		s3[b++] = s2[m++];

	while (n >= lh2 && b < (lh + lh2))
		s3[b++] = s2[m++];

	s3[b] = '\0';

	return (s3);
}
