#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (current == NULL)
	{
		free(head);
	}
	else
	{
		while (current != NULL)
		{
			current = current->next;
			free(head);
			head = current;
		}
	}
}
