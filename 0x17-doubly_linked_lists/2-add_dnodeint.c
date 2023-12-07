
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new node to the beginning of the list
 * @head: pointer to the list
 * @n: new node data
 *
 * Return: A pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = NULL;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	ptr = *head;
	node->n = n;
	node->prev = NULL;

	if (ptr == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}
	else
	{
		node->next = ptr;
		ptr->prev = node;
		*head = node;
		return (*head);
	}
}
