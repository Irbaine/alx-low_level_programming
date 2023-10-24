#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer to the head of the listint_t list
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t nodes, index = 0;

    nodes = looped_listint_len(head);

    if (nodes == 0)
    {
        for (; head != NULL; nodes++)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
        }
    }
    else
    {
        for (index = 0; index < nodes; index++)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
        }
        printf("-> [%p] %d\n", (void *)head, head->n);
    }

    return (nodes);
}

/**
 * looped_listint_len - Count the number of unique nodes
 * @head: A pointer to the head of the listint_t to check
 * Return: return 0 if the list is not looped 
 * Otherwise - the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
    const listint_t *tortoise, *hare;
    size_t nodes = 0;

    if (head == NULL || head->next == NULL)
        return (0);

    tortoise = head;
    hare = head;

    while (hare && hare->next)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            do
            {
                nodes++;
                tortoise = tortoise->next;
            } while (tortoise != hare);

            tortoise = head;

            while (tortoise != hare)
            {
                nodes++;
                tortoise = tortoise->next;
                hare = hare->next;
            }

            return (nodes);
        }
    }

    return (0);
}
