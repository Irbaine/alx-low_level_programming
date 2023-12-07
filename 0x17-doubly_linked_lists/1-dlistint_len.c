#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - Get length of elements in a linked list
 * @h: pointer to the linked list
 *
 * Return: returns the number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t const *current;
	int nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	for (current = h; current != NULL; current = current->next)
	{
		nodes++;
	}

	return (nodes);
}
