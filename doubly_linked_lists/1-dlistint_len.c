#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: pointer to the head of the doubly linked list
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t ct = 0;

	while (h != NULL)
	{
		ct++;
		h = h->next;
	}

	return (ct);
}
