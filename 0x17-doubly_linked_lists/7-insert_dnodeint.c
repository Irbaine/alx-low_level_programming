#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert new node at index given
 * @h: pointer to the start of the list
 * @idx: index position of the new node
 * @n: data n of the new node
 *
 * Return: returns the pointer to the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	/* Check if memory is successfully allocated */
	if (node == NULL)
	{
		return (NULL);
	}
	/* Assign value to new node */
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	/* Check if list is not empty */
	if (*h == NULL)
	{
		*h = node;
		return (*h);
	}
	/* Insert the node */
	return (insert(&*h, idx, node));
}

/**
 * insert - insert the node in the index position
 * @h: pointer to the first node of the list
 * @idx: index position
 * @node: pointer to the new node
 *
 * Return: returns the pointer to the new node
 */

dlistint_t *insert(dlistint_t **h, unsigned int idx, dlistint_t *node)
{
	unsigned int count = 1;
	dlistint_t *ptr = *h;
	dlistint_t *current = *h;

	if (idx == 0)
	{
		node->next = current;
		current->prev = node;
		*h = node;
		return (*h);
	}
	else
	{
		while (current != NULL)
		{
			ptr = ptr->next;
			if (count == idx)
			{
				current->next = node;
				node->prev = current;
				ptr->prev = node;
				node->next = ptr;
				return (node);
			}
			current = current->next;
			count++;
		}
		return (NULL);
	}
}
