#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of dlistint_t list
 *
 * @h: pointer to the head of a doubly linked list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t ct = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		ct++;
		h = h->next;
	}

	return (ct);
}
