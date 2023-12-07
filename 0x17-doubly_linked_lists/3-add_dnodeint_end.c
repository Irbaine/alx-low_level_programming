#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of the list.
 * @head: pointer to the first node of the list
 * @n: new node data
 *
 * Return: returns the pointer to the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (ptr == NULL)
	{
		*head = node;
		node->prev = NULL;
		return (*head);
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = node;
		node->prev = ptr;
		return (*head);
	}
}
