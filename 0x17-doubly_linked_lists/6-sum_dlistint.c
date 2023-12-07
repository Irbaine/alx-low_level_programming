#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sum all the data n of a dlistint_t list
 * @head: pointer to the start of the list
 *
 * Return: returns the sum of all the data of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
