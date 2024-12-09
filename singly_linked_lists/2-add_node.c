#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list-t list
 *
 * @head: pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	int lh = 0;
	int n;
	char *str_cp;

	n_node = (list_t *)malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	while (str[lh] != '\0')
	{
		lh++;
	}

	str_cp = (char *)malloc(sizeof(char) * (lh + 1));
	if (str_cp == NULL)
	{
		free(n_node);
		return (NULL);
	}

	for (n = 0; n < lh; n++)
	{
		str_cp[n] = str[n];
	}
	str_cp[lh] = '\0';

	n_node->str = str_cp;
	n_node->len = lh;
	n_node->next = *head;

	*head = n_node;
	return (n_node);
}
