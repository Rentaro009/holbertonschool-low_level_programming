#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to beginning of the located substring, or NULL if
 * the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int n, m;

	for (n = 0; haystack[n] != '\0'; n++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[n + m] != needle[m])
				break;
		}
		if (!needle[m])
			return (&haystack[n]);
	}
	return (NULL);
}
