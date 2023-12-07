#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - print doubly linked list
 * @h: pointer to the doubly linked list
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t const *current;
	int nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	for (current = h; current != NULL; current = current->next)
	{
		printf("%i\n", current->n);
		nodes++;
	}

	return (nodes);
}
