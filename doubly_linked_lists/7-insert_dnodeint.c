#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: A pointer to the head of the doubly linked list
 * @idx: The index where the new node should be added (starting from 0)
 * @n: The integer value to store in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *temp;
	unsigned int ct = 0;

	n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	if (idx == 0)
	{
		n_node->next = *h;
		n_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = n_node;
		*h = n_node;
		return (n_node);
	}

	temp = *h;
	while (temp != NULL && ct < idx - 1)
	{
		temp = temp->next;
		ct++;
	}

	if (temp == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->next = temp->next;
	n_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = n_node;
	temp->next = n_node;

	return (n_node);
}
