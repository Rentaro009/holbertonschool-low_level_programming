#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 *
 * @s: the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int lh = _strlen(s);

	int st = 0;
	int ed = lh - 1;

	while (st < ed)
	{
		char tmp = s[st];

		s[st] = s[ed];

		s[ed] = tmp;

		st++;
		ed--;
	}
}
