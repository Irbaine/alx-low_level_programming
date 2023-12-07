#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @*head: pointer to the start of the list
 * @index: index position
 *
 * Return: 1 if successful or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;
	dlistint_t *ptr = *head;

	if (current == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	else
	{
		while (current != NULL)
		{
			ptr = ptr->next;
			if (count == index)
			{
				ptr->prev = current->prev;
				free(current);
				current = ptr->prev;
				current->next = ptr;
			}
			current = current->next;
			count++;
		}
		return (1);
	}
}
