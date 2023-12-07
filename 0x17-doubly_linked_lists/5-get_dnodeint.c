#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - gets a node at index specified
 * @head: pointer to the start of the list
 * @index: index of the node to be get.
 *
 * Return: return the pointer to the node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tracker = head;

	if (count == index)
	{
		return (head);
	}

	while (tracker != NULL)
	{
		if (count == index)
		{
			return (tracker);
		}
		tracker = tracker->next;
		count++;
	}
	return (NULL);
}
