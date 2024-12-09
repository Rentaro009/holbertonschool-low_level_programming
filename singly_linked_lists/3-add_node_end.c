#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: address of of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *temp;

	n_node = (list_t *)malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->len = 0;
	while (str[n_node->len] != '\0')
	{
		n_node->len++;
	}

	n_node->next = NULL;

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
	}

	return (n_node);
}
