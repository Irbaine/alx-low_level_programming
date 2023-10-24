#include "lists.h"

/**
 * @head: pointer to the first element
 * pop_listint - delete the head node
 * Return: the data inside the elements whic is deleted
 * or 0 if empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
