#include "lists.h"

/**
 * reverse_listint - function to reverse a linked list
 * @head: pointer to head
 * Return: pointer to the neew head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = nxt;
	}
	*head = previous;

	return (*head);
}
