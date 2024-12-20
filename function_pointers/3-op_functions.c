#include "3-calc.h"

/**
 * op_add - calculates the sum of a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: product of and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of division of a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
