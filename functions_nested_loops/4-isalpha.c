#include "main.h"

/**
 * _isalpha - check for alphabetic letter
 *
 * @c: the character to check
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
