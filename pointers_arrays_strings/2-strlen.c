#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the string to calculate
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int st = 0;

	while (*s != '\0')
	{
		st++;
	s++;
	}
	 return (st);
}
