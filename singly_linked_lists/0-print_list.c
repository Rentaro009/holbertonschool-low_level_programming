#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: read only pointer to the head node of singly linked list
 *
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t node_ct = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		node_ct++;

		h = h->next;
	}
		
	return (node_ct);
}
