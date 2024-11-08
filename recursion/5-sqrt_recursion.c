#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the natural square root for
 *
 * Return: the result of n
 */

int _sqrt_recursion(int n)
{
	return (check(n, 1));
}

/**
 * check - checks if the number is a natural square root
 *
 * @gs: the value to multiply
 *
 * Return: result of n
 */

int check(int n, int gs)
{
	if (gs * gs == n)
		return (gs);
	if (gs * gs > n)
		return (-1);
	return (check(n, gs + 1));
}
