#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a character in a string
 *
 * @s: the string to search
 * @c: character to find
 *
 * Return: return a pointer to the first occurrence of c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int m;

	while (1)
	{
		m = *s++;
		if (m == c)
		{
			return (s - 1);
		}
		if (m == 0)
		{
			return (NULL);
		}
	}
}
