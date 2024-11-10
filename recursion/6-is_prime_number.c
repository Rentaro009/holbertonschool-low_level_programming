#include "main.h"

/**
 * is_prime_number - return 1 if the integer is a prime number,
 * otherwise returns 0
 *
 * @n: integer to check
 *
 * Return: 1 if integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, n - 1));
}

/**
 * check - checks the number to if it if a prime number
 *
 * @n: integer to check
 * @gs: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int check(int n, int gs)
{
	if (gs == 1)
		return (1);
	if (n % gs == 0 && gs > 0)
		return (0);
	return (check(n, gs - 1));
}
