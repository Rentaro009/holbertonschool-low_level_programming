#include "main.h"

/**
 * _abs - computes the absolute values of an integer
 *
 * @n: the value to check
 *
 * Return: Always 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
