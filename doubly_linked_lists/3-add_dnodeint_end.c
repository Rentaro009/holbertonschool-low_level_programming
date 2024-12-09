#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A pointer to the head of the list
 * @n: The integer to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *temp;

	n_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = NULL;
	n_node->prev = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = n_node;
		n_node->prev = temp;
	}

	return (n_node);
}
